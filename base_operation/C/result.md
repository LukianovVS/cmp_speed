
### gcc

|      operation       |  time, us  |  coef |
|----------------------|------------|-------|
|       sum_int(1, 23) |   2.387 ns |    -  |
|    sum_int(33, 1232) |   2.358 ns |   1.0 |
|              sub_int |   2.334 ns |   1.0 |
|              mul_int |   2.875 ns |   1.2 |
|         div_int(7,3) |   4.342 ns |   1.8 |
|       div_int(72, 1) |   4.772 ns |   2.0 |
|       div_int(64, 2) |   4.604 ns |   1.9 |
| div_mod_int(1345, 2) |   5.201 ns |   2.2 |
| div_mod_int(1345, 7) |   5.224 ns |   2.2 |


### g++

|      operation       |  time, us  |  coef |
|----------------------|------------|-------|
|       sum_int(1, 23) |   2.541 ns |    -  |
|    sum_int(33, 1232) |   2.531 ns |   1.0 |
|              sub_int |   2.358 ns |   0.9 |
|              mul_int |   2.879 ns |   1.1 |
|         div_int(7,3) |   4.368 ns |   1.7 |
|       div_int(72, 1) |   4.840 ns |   1.9 |
|       div_int(64, 2) |   4.662 ns |   1.8 |
| div_mod_int(1345, 2) |   5.179 ns |   2.0 |
| div_mod_int(1345, 7) |   5.176 ns |   2.0 |


### gcc -O1

|      operation       |  time, us  |  coef |
|----------------------|------------|-------|
|       sum_int(1, 23) |   2.413 ns |    -  |
|    sum_int(33, 1232) |   2.406 ns |   1.0 |
|              sub_int |   2.344 ns |   1.0 |
|              mul_int |   2.442 ns |   1.0 |
|         div_int(7,3) |   4.193 ns |   1.7 |
|       div_int(72, 1) |   4.371 ns |   1.8 |
|       div_int(64, 2) |   4.271 ns |   1.8 |
| div_mod_int(1345, 2) |   5.098 ns |   2.1 |
| div_mod_int(1345, 7) |   4.994 ns |   2.1 |


### g++ -O1

|      operation       |  time, us  |  coef |
|----------------------|------------|-------|
|       sum_int(1, 23) |   2.436 ns |    -  |
|    sum_int(33, 1232) |   2.416 ns |   1.0 |
|              sub_int |   2.350 ns |   1.0 |
|              mul_int |   2.435 ns |   1.0 |
|         div_int(7,3) |   4.036 ns |   1.7 |
|       div_int(72, 1) |   4.464 ns |   1.8 |
|       div_int(64, 2) |   4.354 ns |   1.8 |
| div_mod_int(1345, 2) |   5.215 ns |   2.1 |
| div_mod_int(1345, 7) |   5.191 ns |   2.1 |


### gcc -O2

|      operation       |  time, us  |  coef |
|----------------------|------------|-------|
|       sum_int(1, 23) |   2.429 ns |    -  |
|    sum_int(33, 1232) |   2.422 ns |   1.0 |
|              sub_int |   2.447 ns |   1.0 |
|              mul_int |   2.454 ns |   1.0 |
|         div_int(7,3) |   4.133 ns |   1.7 |
|       div_int(72, 1) |   4.564 ns |   1.9 |
|       div_int(64, 2) |   4.431 ns |   1.8 |
| div_mod_int(1345, 2) |   5.316 ns |   2.2 |
| div_mod_int(1345, 7) |   5.310 ns |   2.2 |


### g++ -O2

|      operation       |  time, us  |  coef |
|----------------------|------------|-------|
|       sum_int(1, 23) |   2.456 ns |    -  |
|    sum_int(33, 1232) |   2.466 ns |   1.0 |
|              sub_int |   2.450 ns |   1.0 |
|              mul_int |   2.459 ns |   1.0 |
|         div_int(7,3) |   4.129 ns |   1.7 |
|       div_int(72, 1) |   4.574 ns |   1.9 |
|       div_int(64, 2) |   4.407 ns |   1.8 |
| div_mod_int(1345, 2) |   5.308 ns |   2.2 |
| div_mod_int(1345, 7) |   5.311 ns |   2.2 |


### gcc -O3

|      operation       |  time, us  |  coef |
|----------------------|------------|-------|
|       sum_int(1, 23) |   2.452 ns |    -  |
|    sum_int(33, 1232) |   2.448 ns |   1.0 |
|              sub_int |   2.440 ns |   1.0 |
|              mul_int |   2.470 ns |   1.0 |
|         div_int(7,3) |   4.118 ns |   1.7 |
|       div_int(72, 1) |   4.576 ns |   1.9 |
|       div_int(64, 2) |   4.427 ns |   1.8 |
| div_mod_int(1345, 2) |   2.449 ns |   1.0 |
| div_mod_int(1345, 7) |   2.451 ns |   1.0 |


### g++ -O3

|      operation       |  time, us  |  coef |
|----------------------|------------|-------|
|       sum_int(1, 23) |   2.459 ns |    -  |
|    sum_int(33, 1232) |   2.466 ns |   1.0 |
|              sub_int |   2.427 ns |   1.0 |
|              mul_int |   2.473 ns |   1.0 |
|         div_int(7,3) |   4.125 ns |   1.7 |
|       div_int(72, 1) |   4.564 ns |   1.9 |
|       div_int(64, 2) |   4.422 ns |   1.8 |
| div_mod_int(1345, 2) |   2.450 ns |   1.0 |
| div_mod_int(1345, 7) |   2.448 ns |   1.0 |

