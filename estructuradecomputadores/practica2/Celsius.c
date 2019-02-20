#include <stdio.h>
int main()
	{
	float Celsius, Farenheit;
	printf("Escribeme un número en grados Celsius: ");
	scanf("%f",&Celsius);
	Farenheit = Celsius * 1.8 + 32;
	printf ("\nAquí tienes la transformación a grados Farenheit: ");
	printf ("%f\n", Farenheit);
	return 0;
	}
	
