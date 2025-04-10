#include <stdio.h>

int mul(int n){
        if(n % 10 == 0){
                return 0;
        }

        if(n < 10){
                return n;
        }

        return (n % 10) * mul(n / 10);
}

