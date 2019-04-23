/*Practica punteros ej 1-programa punteros1D.c en lenguaje C que lea un vector de n
enteros e indique cuál es el valor mínimo del vector imprimiéndolo por
pantalla. 
*/

#include <stdio.h>
#define TAM 4

void cargar (int *vec);
void comparar (int *vec);

int main (){
	int vec[TAM];
	
	cargar(vec);
	comparar(vec);
	
	
	
	
	
	system("pause");
	return 0;
}
void cargar (int *vec){
	
	int i;
	
	for(i = 0; i < 4; i++){
		printf("Introduce un valor para la posicion %i:  ",i+1);
		scanf("%i",(vec + i));
	}
	
}
void comparar (int *vec){
	int minimo ;
	int i;
	minimo = *(vec + 0);
	
	for (i = 0; i < TAM; i++) {
		
			if (*(vec+i) < minimo) {
			minimo = *(vec + i);
			}
			
		
	
	}
	printf("El minimo es %i.\n",minimo);
}

