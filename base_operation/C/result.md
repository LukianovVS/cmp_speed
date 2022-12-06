
### gcc

|      operation       |  time, us  |  coef |
|----------------------|------------|-------|
|       sum_int(1, 23) |   2.256 ns |    -  |
|    sum_int(33, 1232) |   2.241 ns |   1.0 |
|              sub_int |   2.385 ns |   1.1 |
|              mul_int |   2.988 ns |   1.3 |
|         div_int(7,3) |   4.481 ns |   2.0 |
|       div_int(72, 1) |   5.024 ns |   2.2 |
|       div_int(64, 2) |   4.910 ns |   2.2 |
|          div_mod_int |   4.300 ns |   1.9 |


### g++

|      operation       |  time, us  |  coef |
|----------------------|------------|-------|
|       sum_int(1, 23) |   2.271 ns |    -  |
|    sum_int(33, 1232) |   2.276 ns |   1.0 |
|              sub_int |   2.408 ns |   1.1 |
|              mul_int |   3.092 ns |   1.4 |
|         div_int(7,3) |   4.689 ns |   2.1 |
|       div_int(72, 1) |   5.024 ns |   2.2 |
|       div_int(64, 2) |   4.755 ns |   2.1 |
|          div_mod_int |   4.156 ns |   1.8 |


### gcc -O

|      operation       |  time, us  |  coef |
|----------------------|------------|-------|
|       sum_int(1, 23) |   0.302 ns |    -  |
|    sum_int(33, 1232) |   0.586 ns |   1.9 |
|              sub_int |   0.349 ns |   1.2 |
|              mul_int |   0.588 ns |   2.0 |
|         div_int(7,3) |   4.151 ns |  13.8 |
|       div_int(72, 1) |   4.508 ns |  15.0 |
|       div_int(64, 2) |   4.376 ns |  14.5 |
|          div_mod_int |   0.293 ns |   1.0 |


### gcc -O1

|      operation       |  time, us  |  coef |
|----------------------|------------|-------|
|       sum_int(1, 23) |   0.289 ns |    -  |
|    sum_int(33, 1232) |   0.587 ns |   2.0 |
|              sub_int |   0.350 ns |   1.2 |
|              mul_int |   0.575 ns |   2.0 |
|         div_int(7,3) |   4.156 ns |  14.4 |
|       div_int(72, 1) |   4.576 ns |  15.8 |
|       div_int(64, 2) |   4.393 ns |  15.2 |
|          div_mod_int |   0.293 ns |   1.0 |


### g++ -O

|      operation       |  time, us  |  coef |
|----------------------|------------|-------|
|       sum_int(1, 23) |   0.289 ns |    -  |
|    sum_int(33, 1232) |   0.287 ns |   1.0 |
|              sub_int |   0.348 ns |   1.2 |
|              mul_int |   0.587 ns |   2.0 |
|         div_int(7,3) |   4.073 ns |  14.1 |
|       div_int(72, 1) |   4.525 ns |  15.6 |
|       div_int(64, 2) |   4.381 ns |  15.1 |
|          div_mod_int |   0.587 ns |   2.0 |


### g++ -O1

|      operation       |  time, us  |  coef |
|----------------------|------------|-------|
|       sum_int(1, 23) |   0.292 ns |    -  |
|    sum_int(33, 1232) |   0.295 ns |   1.0 |
|              sub_int |   0.352 ns |   1.2 |
|              mul_int |   0.582 ns |   2.0 |
|         div_int(7,3) |   4.125 ns |  14.1 |
|       div_int(72, 1) |   4.627 ns |  15.8 |
|       div_int(64, 2) |   4.429 ns |  15.2 |
|          div_mod_int |   0.595 ns |   2.0 |


### gcc -O2

|      operation       |  time, us  |  coef |
|----------------------|------------|-------|
|       sum_int(1, 23) |   0.000 ns |    -  |
|    sum_int(33, 1232) |   0.000 ns |   nan |
|              sub_int |   0.357 ns |   inf |
|              mul_int |   0.583 ns |   inf |
|         div_int(7,3) |   4.157 ns |   inf |
|       div_int(72, 1) |   4.556 ns |   inf |
|       div_int(64, 2) |   4.376 ns |   inf |
|          div_mod_int |   0.000 ns |   nan |


### g++ -O2

|      operation       |  time, us  |  coef |
|----------------------|------------|-------|
|       sum_int(1, 23) |   0.000 ns |    -  |
|    sum_int(33, 1232) |   0.000 ns |   nan |
|              sub_int |   0.352 ns |   inf |
|              mul_int |   0.583 ns |   inf |
|         div_int(7,3) |   4.084 ns |   inf |
|       div_int(72, 1) |   4.609 ns |   inf |
|       div_int(64, 2) |   4.514 ns |   inf |
|          div_mod_int |   0.000 ns |   nan |


### gcc -O3

|      operation       |  time, us  |  coef |
|----------------------|------------|-------|
|       sum_int(1, 23) |   0.000 ns |    -  |
|    sum_int(33, 1232) |   0.000 ns |   nan |
|              sub_int |   0.354 ns |   inf |
|              mul_int |   0.296 ns |   inf |
|         div_int(7,3) |   4.170 ns |   inf |
|       div_int(72, 1) |   4.628 ns |   inf |
|       div_int(64, 2) |   4.398 ns |   inf |
|          div_mod_int |   0.000 ns |   nan |


### g++ -O3

|      operation       |  time, us  |  coef |
|----------------------|------------|-------|
|       sum_int(1, 23) |   0.000 ns |    -  |
|    sum_int(33, 1232) |   0.000 ns |   nan |
|              sub_int |   0.351 ns |   inf |
|              mul_int |   0.288 ns |   inf |
|         div_int(7,3) |   4.161 ns |   inf |
|       div_int(72, 1) |   4.590 ns |   inf |
|       div_int(64, 2) |   4.377 ns |   inf |
|          div_mod_int |   0.000 ns |   nan |

