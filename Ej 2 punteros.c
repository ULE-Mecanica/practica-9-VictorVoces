/*Realice un programa punteros2D.c en lenguaje C que lea dos números enteros 
que especifiquen el número de filas y el número de columnas de una matriz. 
La función main reservará un puntero a una matriz de enteros de tamaño 
filas x columnas. A continuación deberá leer los elementos que componen 
la matriz y calculará la suma de los elementos de dicha matriz, 
imprimiendo la matriz introducida y el resultado por pantalla.
*/

#include <stdio.h>
#include <stdlib.h>



int main(){
	
	int numfila,numcolumna,i,j,*matriz,suma;
	printf("Numero de filas: ");
	scanf("%i",&numfila);
	printf("Numero de columnas: ");
	scanf("%i",&numcolumna);
	suma = 0;
	
	
	matriz = (int*)malloc(sizeof(int)*numfila*numcolumna);
	
	
	for(i = 0; i < numfila; i++){
		for(j = 0; j < numcolumna; j++){
			printf("Introduce valor para la posicion %i%i: ",i+1,j+1);
			scanf("%i",matriz + (i*numcolumna)+j); 
			suma += *(matriz + (i*numcolumna)+j);
		}
	}
	
	printf("El resultado de la suma de los elementos de la matriz es: %i.\n",suma);

	free(matriz);
	
	
	
	return 0;
} 

	
	
	

