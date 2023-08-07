#include <stdio.h>

void printmat(int**, int, int);

int main(void){
	int rows = 7;
	int cols = 7;
	int x[rows][cols];
	
	for(int i = 0; i < rows; i++){
		for(int j = 0; j < cols; j++){
			x[i][j] = 0; 
		}
	}

	printmat(x,rows,cols);
	
}

void printmat(int** arr, int rows, int cols){

	for(int i = 0; i < rows; i++){
		for(int j = 0; j < cols; j++){
			printf("%d", arr[i][j]);
		}
		printf("%s", "\n");
	}
}
