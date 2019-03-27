#include <stdio.h>
#include <math.h>
float distancia (int a[], int b[]);

int main(){
	
	int i, TAM=2;

	int x[TAM], y[TAM];
	
	float res;

	printf("Da valores para el punto x: \n");

	for (i=0;i<TAM;i++){

	scanf("%d", &x[i]);

	}

	printf("Da valores para el punto y: \n");

	for (i=0;i<TAM;i++){

	scanf("%d", &y[i]);

	}
	
	res=distancia(x, y);

	printf("El resultado es: %f \n", res);

	return 0;
}

float distancia (int a[], int b[]){

	float distancia, resta1, resta2;

	resta1=((float)b[0]-(float)a[0]);
	resta2=((float)b[1]-(float)a[1]);

	distancia=sqrt(pow(resta1, 2) + pow(resta2, 2));

	return distancia;

}

