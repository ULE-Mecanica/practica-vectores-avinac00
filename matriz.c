#include <stdio.h>
#include <stdlib.h> 
#include <time.h> 

int inicializa(int mat[][5]);

int main(){

	int res, m[5][5];
	int i,j;	

	res=inicializa(m);

	for(i=0;i<5;i++){
		for(j=0;j<5;j++){

			printf("%d\t",m[i][j]);
	
		}

		printf("\n");

	}

	return 0;
}

int inicializa(int mat[][5]){

	int i, j, aux;

	srand(time(NULL));

	for(i=0;i<5;i++){
		for(j=0;j<5;j++){

			mat[i][j]=3+rand()%(16-3);
	
		}

	}
	
	aux=mat[i][j];

	return aux;
}

