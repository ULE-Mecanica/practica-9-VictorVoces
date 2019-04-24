/*Realice un programa pares.c en lenguaje C que rellene una matriz nxm 
con los primeros nxm n�meros pares y la imprima por pantalla. 
El programa debe tener una funci�n para imprimir la matriz por 
pantalla y otra que rellene la matriz con n�meros pares.
*/

#include <stdio.h>
#include <stdlib.h>

void rellenarmatriz(int *matriz, int filas, int columnas);
void imprimirmatriz(int *matriz, int filas, int columnas);

int main (){
	int *matriz,filas,columnas;
	
	printf("Introduce numero de filas: ");
	scanf("%i",&filas);
	printf("Introduce numero de columnas: ");
	scanf("%i",&columnas);
	
	matriz = (int*)malloc(sizeof(int)*filas*columnas);
	
	rellenarmatriz(matriz,filas,columnas);
	imprimirmatriz(matriz,filas,columnas);
	
	
	
	
	return 0;
}  
void rellenarmatriz(int *matriz,int filas,int columnas){
	
	int i,j,k;
	
	
	for (i = 0; i < filas; i++){
		for (j = 0; j < columnas; j++){
			
				*(matriz + i*columnas+j) = k;	
			
			k+=2;
		}
	}
}
void imprimirmatriz(int *matriz, int filas, int columnas){
	int i,j;
	for(i = 0; i < filas; i++){
		for(j = 0; j < columnas; j++){
			printf("%i\t ",*(matriz + i*columnas+j));
		}
		printf("\n");
	}
}
