#include <stdio.h>

long fib(int);
int main(){
	int num = 0;
	do{
		printf("Enter positive number: ");
		scanf("%d", &num);
	}while(num < 0);

	printf("The %d'th fib number is %ld\n", num, fib(num));
	return 0;
}
