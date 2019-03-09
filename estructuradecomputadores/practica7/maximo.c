#include <stdio.h>
#define TAN 10
void inicializa (int vector[TAN]){
	for (int i=0; i<TAN; i++){
		printf ("Introduce un valor en la posición %d: ", i);
		scanf ("%d",&vector[i]);

	}
}
int maximo (int vector2[TAN]) {
	int max = vector2[0];
	for (int i=1;i<TAN;i++){
		if (vector2[i]>max){
			max=vector2[i];
		}

	}
	return (max);
}
int main(int argc, char const *argv[])
{
	int vector[TAN], max;
	inicializa (vector);
	max = maximo (vector);
	printf("El resultado máximo es: %d\n",max);
	return 0;
}