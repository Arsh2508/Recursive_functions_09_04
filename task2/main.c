#include <stdio.h>

int mul(int);
int main()
{
	int num = 0;
	do{
		printf("Enter a positive number: ");
		scanf("%d", &num);
	}while(num < 0);

	printf("%d\n",mul(num));
	return 0;
}
