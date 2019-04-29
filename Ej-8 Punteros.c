/*Realice un programa que complete una matriz de n filas y m columnas 
con números aleatorios entre 1 y 100. Debe imprimir dicha matriz por pantalla.
Ej-8*/

#include <stdio.h>
#include <stdlib.h>

void generamatriz(int *matriz, int filas, int columnas);
int main(){

	int *matriz,filas,columnas,i,j;
	
	printf("Numero de filas: ");
	scanf("%d",&filas);
	printf("Numero de columnas: ");
	scanf("%d",&columnas);
	
	matriz = (int*)malloc(sizeof(int)*filas*columnas);
	
	generamatriz(matriz,filas,columnas);
	
	for(i = 0; i < filas; i++){
		for(j = 0; j < columnas; j++){
			printf("%d\t",*(matriz + i*columnas+j));
		}
		printf("\n");
	}
	
	
}
void generamatriz(int *matriz, int filas, int columnas){
	
	int i,j;
	
	srand(time(NULL));
	
	for (i = 0; i < filas; i++){
		for(j = 0; j < columnas; j++){
			*(matriz + i*columnas+j) = rand()%(100-1+1)+1;
		}
	}
}
