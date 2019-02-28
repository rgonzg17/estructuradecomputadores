#include <stdio.h>
int main()
	{
	float Km, Millas, Yardas, Pies;
	printf ("Escribe un número de kilómetros:");
	scanf ("%f",&Km);
	Millas = Km/1.60;
	Pies = Km * 100000 / 30.48;
	Yardas = Km * 100000 / 91.44;
	printf ("Las millas son:");
	printf("%f\n", Millas);
	printf("Los pies son: ");
	printf("%f\n", Pies);
	printf("Las yardas son: ");
	printf("%f\n", Yardas);
	printf("Fin del algoritmo\n");
	return 0;
	}
