#include<stdio.h>
#include<stdlib.h>

int main(){
	int num = 10;
	int *pNum = &num;
	printf("hello %d, %d",num, *pNum);
	return  0;
}
