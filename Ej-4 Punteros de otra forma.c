//Ej-4 Punteros
/*Realice un programa media.c en lenguaje C que lea un vector de n enteros 
y contenga una función que calcula el valor medio de dicho vector.
*/

#include <stdio.h>
#include <stdlib.h>

void media(int *vec, int *n);

int main (){
	int n;
	
	printf("Introduce n enteros: ");
	scanf("%d",&n);
	int vec[n];
	
	
	media(vec,&n);
	
	
	return 0;
} 
void media(int *vec, int *n){
	int i;
	float media;
	
	
	for (i = 0; i < *n; i++){
		printf("Introduce la posicion %i para el vector: ",i+1);
		scanf("%i",(vec + i) );
		media = media + *(vec + i);
	}

	printf("\nEl resultado es la media es %f.\n",media/ *n);
}
