#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>

typedef int num_t;
num_t a[]={12,43,1,6,1,0,44,342,35,90,4,7,1,8,3};

int pivot(num_t arr[]){
	size_t size=sizeof(arr)/sizeof(arr[0]);

	// calculate median of first, middle and last item in the array.
	printf("%ul", size);
	return 0;
}

int main(){

	pivot(a);
	return 0;
}
