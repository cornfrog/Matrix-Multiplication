#include <stdio.h>

void printMatrix();

int matrix[2][2] = {{1,2}, {3,4}};

int main(){
	printMatrix();	
	return 0;
}

void printMatrix(){
	for(int i = 0; i < 2; i++){
		for(int j = 0; j < 2; j++){
			printf("%d ", matrix[i][j]);
		}
		printf("\n");
	}
}
