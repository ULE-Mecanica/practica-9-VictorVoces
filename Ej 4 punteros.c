//Ej-4 Punteros
/*Realice un programa media.c en lenguaje C que lea un vector de n enteros 
y contenga una función que calcula el valor medio de dicho vector.
*/

#include <stdio.h>
#include <stdlib.h>

void media(int *vec);

int main (){
	
	int vec[4];
	
	
	media(vec);
	
	
	return 0;
} 
void media(int *vec){
	int i;
	float media;
	
	
	for (i = 0; i < 4; i++){
		printf("Introduce la posicion %i para el vector: ",i+1);
		scanf("%i",(vec + i) );
		media = media + *(vec + i);
	}

	printf("\nEl resultado es la media es %f.\n",media/4);
}
