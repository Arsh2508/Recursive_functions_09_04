#include <stdio.h>

int sum(int);
int main()
{
	int num = 0;
	printf("Etner a number: ");
	scanf("%d", &num);

	if(num < 0){
		num *= -1;	//will count the same for negative numbers
	}
	printf("The sum of it's digits is %d\n", sum(num));
	return 0;
}
