#include <stdio.h>

void PrintArr(int *x, int n){
        if(n > 1){
               PrintArr(x, n - 1);
        }
        printf("arr[%d] = %d\n", n - 1, x[n - 1]);
}

