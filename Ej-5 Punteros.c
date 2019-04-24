/*Realice un programa matriz.c en lenguaje C que almacene en una matriz de 
tamaño 10x10 los 100 primeros números enteros e imprima dicha matriz por pantalla .
*/

#include <stdio.h>
#include <stdlib.h>

int numenteros(int num);

int main(){
	
	int *matriz,i,j,k,fila,columna;
	fila = 10;
	columna = 10;
	
	matriz = (int*)malloc(sizeof(int)*fila*columna);
	
	//Aqui se genera la matriz
	k = 1;
	for(i = 0; i < fila; i++){
		for(j = 0; j < columna; j++){
			
			*(matriz + i*columna+j) = k;
			k++;
		}
	}
	for(i = 0; i < fila; i++){
		for(j = 0; j < columna; j++){
			printf("%i\t ",*(matriz + i*columna+j));
		}
		printf("\n");
	}
	
	return 0;
}


