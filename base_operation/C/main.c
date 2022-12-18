#include <stdio.h>
#include <time.h>


#define N_REPEAT 0xFFFFFFFF
//#define N_REPEAT 0xFFFFF


// all cycles using "volatile" iteration, for off optimization (deleting a loop)

double print_time(char str[], clock_t t_clk, double dt_base)
{
    double dt_clk_operation = ((double)t_clk) / N_REPEAT;
    double dt = dt_clk_operation / CLOCKS_PER_SEC * 1e9;
    printf("| %20s | %7.3f ns | ", str, dt);
    if (dt_base < 0.)
        printf("   -  |\n");
    else
        printf(" %4.1f |\n", dt/dt_base);
    return dt;
}




int sum_int(int a, int b)
{
   for(volatile unsigned long i = 0; i < N_REPEAT; i++)
   {
       b = a + b;
   }
   return b;
}


int sub_int(int a, int b)
{
    
   for(volatile unsigned long i = 0; i < N_REPEAT; i++)
   {
       b = a - b;
   }
   return b;
}


int mul_int(int a, int b)
{
   for(volatile unsigned long i = 0; i < N_REPEAT; i++)
   {
       b = a * b;
   }
   return b;
}


int div_int(int a, int b)
{
   for(volatile unsigned long i = 0; i < N_REPEAT; i++)
   {
       b = a / b;
   }
   return b;
}




int div_mod_int(volatile int a, volatile int b)
{
    volatile int c;
    for(volatile unsigned long i = 0; i < N_REPEAT; i++)
    {
        c = a % b;
    }
    return c;
}



int main(int argc, char *argv[])
{
    if (argc == 2)
    {
        printf("\n### %s\n\n", argv[1]);
    }
    clock_t t_clk;
    double dt_base = -1.;
    /* в эту переменную будем записывать результаты работ функций
    * это нужно чтобы при оптимизации код не выключился как "ненужный"
    * для этого что то надо делать.
    */
    int tmp = 0;
    
    printf("|      operation       |  time, us  |  coef |\n");
    printf("|----------------------|------------|-------|\n");
    
    t_clk = clock();
    tmp += sum_int(1, 23);
    t_clk = clock() - t_clk;
    dt_base = print_time("sum_int(1, 23)", t_clk, dt_base);
    
    
        
    t_clk = clock();
    tmp += sum_int(33, 1232);
    t_clk = clock() - t_clk;
    print_time("sum_int(33, 1232)", t_clk, dt_base);
    
    
    t_clk = clock();
    tmp += sub_int(11, 23);
    t_clk = clock() - t_clk;
    print_time("sub_int", t_clk, dt_base);
    
    t_clk = clock();
    tmp += mul_int(3, 7);
    t_clk = clock() - t_clk;
    print_time("mul_int", t_clk, dt_base);
    
    
    t_clk = clock();
    tmp += div_int(7, 3);
    t_clk = clock() - t_clk;
    print_time("div_int(7,3)", t_clk, dt_base);
    
    t_clk = clock();
    tmp += div_int(72, 1);
    t_clk = clock() - t_clk;
    print_time("div_int(72, 1)", t_clk, dt_base);
    
    
    t_clk = clock();
    tmp += div_int(64, 2);
    t_clk = clock() - t_clk;
    print_time("div_int(64, 2)", t_clk, dt_base);
    
    t_clk = clock();
    tmp += div_mod_int(1345, 2); 
    t_clk = clock() - t_clk;
    print_time("div_mod_int(1345, 2)", t_clk, dt_base);
    
    t_clk = clock();
    tmp += div_mod_int(1345, 7); 
    t_clk = clock() - t_clk;
    print_time("div_mod_int(1345, 7)", t_clk, dt_base);
    
    
    printf("\n");
    
    /*в стандартный вывод пищется полезная информация. Мусор отправил в поток ошибок */
    fprintf(stderr, "rmp val %d\n", tmp);
    
    return 0;
}