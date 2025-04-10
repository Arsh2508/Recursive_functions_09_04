#include <stdio.h>

void Print_Binary(int n){
        if(n > 0){
                Print_Binary(n / 2);
        }
        printf("%d", (n % 2));
}

