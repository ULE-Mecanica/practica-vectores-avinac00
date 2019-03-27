#include <stdio.h>
#include <stdlib.h> 
#include <time.h> 

int inicializa(int mat[][9]);

int main(){

	int res, m[9][9];
	int i,j;	

	res=inicializa(m);

	for(i=0;i<9;i++){
		for(j=0;j<9;j++){

			printf("%d\t",m[i][j]);
	
		}

		printf("\n");

	}

	return 0;
}

int inicializa(int mat[][9]){

	int i, j, aux;

	srand(time(NULL));

	for(i=0;i<9;i++){
		for(j=0;j<9;j++){

		mat[i][j]=(i==j);
	
		}

	}
	
	aux=mat[i][j];

	return aux;
}

