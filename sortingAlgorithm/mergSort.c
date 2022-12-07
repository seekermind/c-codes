#include <stdio.h>
#include <stdlib.h>

int *mergSort(int *arr[]){
	size_t size = sizeof(arr)/sizeof(*arr[0]);
	printf("%d", size);
	return arr;
}

int *a[10];

void main(){
mergSort(a);	
}
