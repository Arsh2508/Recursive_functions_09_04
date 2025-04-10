#include <stdio.h>

char Upper(char *, int, int);
int main()
{
	const int n = 5;
	char arr[n] = {};
	printf("Enter %d elements of char\n", n);
	for(int i = 0; i < n; ++i){
		scanf(" %c", arr + i);
	}
	printf("The first Upper element is %c\n", Upper(arr, n, 0));
	return 0;
}
