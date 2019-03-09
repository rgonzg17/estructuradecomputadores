#include <stdio.h>
#define TAN 20


void lectura (int vector[TAN]){
	for (int i = 0; i < TAN; ++i)
	{
		printf("Eliga los números que desee en la posición %d: ",i+1 );
		scanf ("%d", &vector[i]);
			}
}
void contador (int vector[TAN], int solucion [3]) {

	for (int i = 0; i < TAN; ++i)
	{
		if (vector [i]>0){
			solucion [0] = solucion [0] +1;
		}
		if (vector [i]<0){
			solucion [1] = solucion [1] +1;
		}
		if (vector [i]==0){
			solucion [2] = solucion [2] +1;
		}
	}
		
	}

int main(int argc, char const *argv[])
{
	int vector [TAN], solucion [3]= {0,0,0};
	lectura(vector);
	contador(vector, solucion);
	printf ("La solucón es: Números positivos %d. Números negativos: %d. Numeros que son cero: %d", solucion[0], solucion[1],solucion [2]);
	return 0;
}
