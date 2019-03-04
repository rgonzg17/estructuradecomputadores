#include <stdio.h>
void comparador (int NumeroM, int NumeroN) {
	int numeropar;
	printf("Estos son los números pares que hay entre los dos números seleccionados:\n");
	for (numeropar = 2; numeropar <= NumeroM; numeropar +=2){
		printf("%d\n",numeropar );
	}
}
int main(int argc, char const *argv[])
{
	int M, N;
	printf("Seleccione dos números, el primero debe ser mayor que el segundo para poder realizarse la operación");
	printf ("\nPrimer número: ");
	scanf ("%d", &M);
	printf ("Segundo número: ");
	scanf ("%d", &N);
	if (M > N) {
		comparador (M,N);
}	else {
		printf ("El primer número añadido no es mayor que el segundo\n");
	return 0;
}
}