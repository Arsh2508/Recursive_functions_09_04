#include <stdio.h>

void PrintArr(int *, int);
int main()
{
        const int n = 10;
        int arr[n] = {};
        printf("Enter %d elements of array\n", n);
        for(int i = 0; i < n; ++i){
                scanf("%d", arr + i);
        }
        PrintArr(arr, n - 1);
        return 0;
}

