#include <stdio.h>

int Max(int *, int);
int Min(int *, int);
int main()
{
        const int n = 5;
        int arr[n] = {};
        printf("Enter %d elements of array\n", n);
        for(int i = 0; i < n; ++i){
                scanf("%d", &arr[i]);
        }
        printf("The maximum element is %d\n", Max(arr, n - 1));
        printf("The minimum element is %d\n", Min(arr, n - 1));
        return 0;
}

