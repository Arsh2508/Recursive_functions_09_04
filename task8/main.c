#include <stdio.h>

void Print_Binary(int);
int main()
{
	int num = 0;
	do{
		printf("Enter non-negative number: ");
		scanf("%d", &num);
	}while(num < 0);

	Print_Binary(num);
	printf("\n");
	return 0;
}
