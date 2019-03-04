#include <stdio.h>
#include <math.h>
void positivo (int NumeroM,int NumeroN){
	int potencia;
	potencia = pow(NumeroM,NumeroN);
	printf("El resultado de la potencia es: %d\n",potencia );

}
int main(int argc, char const *argv[])
{
	int M,N;
	printf("Los números introducidos deben ser positivos para poder realizarse la operación: ");
	printf ("Primer número: ");
	scanf ("%d",&M);
	printf("Segundo número: ");
	scanf ("%d",&N);
	if (M>0 && N>0) {
		positivo (M,N);
	} else {
		printf("Los números introducidos no son positivos\n");
	}
	return 0;
}