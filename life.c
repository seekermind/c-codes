#include <stdio.h>
#include <stdlib.h>

void begin(int rows, int cols);

int main(int argc, char* argv[])
{
	int row = atoi(argv[1]);
	if(row <= 0){
		printf("rows cant be %d\n", row);		
	}

	int cols = atoi(argv[2]);
	if(cols <= 0){
		printf("columns cant be %d\n", cols);		
	}

	begin(row, cols);

	return 0;

}

void begin(int rows, int cols){
	
	char* simulation = (char*)calloc(rows*cols, sizeof(char));
	for (int i=0; i< rows; i++){
		for(int j=0; j<cols; j++){
			*(simulation + i*cols + j) = 'A';
		}
	}
	
	for (int i=0; i< rows; i++){
		for(int j=0; j<cols; j++){
			printf("%c", *(simulation + i*cols + j));
		}
		printf("\n");
	}
}
