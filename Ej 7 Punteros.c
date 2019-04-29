/*Realice un programa impares.c en lenguaje C que rellene una matriz nxm con los primeros nxm números impares y la imprima por pantalla. 
El programa debe tener una función para imprimir la matriz por pantalla y otra que devuelva una matriz rellena de números impares.
Ej-7.  */

#include <stdio.h>
#include <stdlib.h>

void imprimir(int *matriz, int filas, int columnas);
void rellenaimpares(int *matriz, int filas, int columnas);

int main(){
	
	int *matriz,filas,columnas;
	
	printf("Introduce el numero de filas: ");
	scanf("%d",&filas);
	printf("Introduce el numero de columnas: ");
	scanf("%d",&columnas);
	
	matriz=(int*)malloc(sizeof(int)*filas*columnas);
	
	rellenaimpares(matriz,filas,columnas);
	imprimir(matriz,filas,columnas);
	
	free(matriz);
	
	return 0;
}

void rellenaimpares(int *matriz, int filas, int columnas ){
	
	int num,i,j;
	
	num=1;
	
	for (i = 0; i < filas; i++){
		for(j = 0; j < columnas; j++){
			
				 *(matriz + i*columnas+j) = num;
			
		
			num+=2;
		}
	}
	
}

void imprimir(int *matriz, int filas, int columnas){
	
	int i,j;
	
	
	
	for (i = 0; i < filas; i++){
		for(j = 0; j < columnas; j++){
			printf("%d\t",*(matriz + i*columnas+j));
		}
		printf("\n");
	}
	
}
