/*Realice un programa en lenguaje C que contenga la funci�n inicializamatriz. 
La funci�n main tiene que leer el orden que el usuario desea que tenga la matriz. 
A continuaci�n, deber� llamar a la funci�n inicializamatriz la cual devuelve una matriz identidad del tama�o especificado. 
Es decir, los elementos de la diagonal valen 1 y el resto vale 0. Por �ltimo la funci�n main imprime la matriz
Ej-10
*/

#include <stdio.h>
#include <stdlib.h>


void inicializamatriz(int *matriz, int filas, int columnas);
int main(){

	int *matriz,filas,columnas,i,j;
	
	printf("Numero de filas: ");
	scanf("%d",&filas);
	printf("Numero de columnas: ");
	scanf("%d",&columnas);
	
	matriz = (int*)malloc(sizeof(int)*filas*columnas);
	
	inicializamatriz(matriz,filas,columnas);
	printf("La matriz es:\n\n");
	for (i = 0; i < filas; i++){
		for (j = 0; j < columnas; j++){
		
		printf("%d\t",*(matriz + i*columnas + j));
		}
		printf("\n");
	}
	free(matriz);
	return 0;
}
void inicializamatriz(int *matriz, int filas, int columnas){
	int i,j;
	
	for (i = 0; i < filas; i++){
		for (j = 0; j < columnas; j++){
			if(i == j){
				*(matriz + i*columnas + j) = 1;
			}
			else{
				*(matriz + i*columnas + j) = 0;
			}
		}
	}
}
