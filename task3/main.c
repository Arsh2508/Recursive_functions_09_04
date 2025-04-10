#include <stdio.h>

void print(int);
int main()
{
	int n = 0;
	printf("Enter a number: ");
	scanf("%d", &n);
	print(n);
	printf("\n");
	return 0;
}
