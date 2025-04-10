#include <stdio.h>

void print(int);
int main()
{
	int num = 0; 
	printf("Enter a number: ");
	scanf("%d", &num);
	print(num);
	printf("\n");
	return 0;
}
