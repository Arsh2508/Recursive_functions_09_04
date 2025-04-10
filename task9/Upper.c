#include <stdio.h>

char Upper(char *ch, int n, int i){
        if(i == n){
                return '\0';
        }
        if((ch[i] & 32) == 0){
                return ch[i];
        }
        return Upper(ch, n, i + 1);

}

