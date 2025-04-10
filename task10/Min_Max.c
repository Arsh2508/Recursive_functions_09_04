#include <stdio.h>

int Max(int *x, int n){
	if(n > 0){
		if(x[n] > x[n-1]){	//move the max element to start 
			x[n] ^= x[n-1];
			x[n-1] ^= x[n];
			x[n] ^= x[n - 1];
		}
		return Max(x, n - 1);
	}
	return x[n];	// same as x[0]: the first element
}
int Min(int *x, int n){
	if(n > 0){
		if(x[n] < x[n-1]){
			x[n] ^= x[n-1];
			x[n-1] ^= x[n];
			x[n] ^= x[n - 1];
		}
		return Min(x, n - 1);
	}
	return x[n];
}




