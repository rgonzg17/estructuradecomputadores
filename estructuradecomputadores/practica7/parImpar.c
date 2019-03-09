#include <stdio.h>
#define TAN 15
void lectura (int vector [TAN]){
for (int i = 0; i < TAN; ++i)
	{
		printf("Introduzca el número que desee en la posición %d: ",i+1 );
		scanf ("%d",&vector [i]);
	}	
}
void parImpar (int vector [TAN], int solucion[2]){
	for (int i = 0; i < TAN; ++i)
	{
		if (vector[i]%2 == 0){
			solucion [0] = solucion [0] +1;
		}
		if (vector[i]%2 != 0){
			solucion [1] = solucion [1] +1;		
		}
	}
}
int main(int argc, char const *argv[])
{
	int vector [TAN], solucion [2]= {0,0};
	lectura (vector);
	parImpar(vector, solucion);
	printf("La cantidad de nºs pares es: %d\nLa cantidad de nºs impares es: %d\n",solucion[0], solucion[1]);
	return 0;
}