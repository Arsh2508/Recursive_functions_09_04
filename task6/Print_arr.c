#include <stdio.h>

void PrintArr(int *x, int n){
        if(n >= 0){
                printf("arr[%d] = %d\n", n, x[n]);
                PrintArr(x, n - 1);
        }
}

