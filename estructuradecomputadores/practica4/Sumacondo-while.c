#include <stdio.h>
int main ()
{
	int Num, Total, Entero, i;
	printf ("Escribe cuantos números quieres sumar: ");
	scanf ("%d", &Num);
	Total = 0;
	i = 1;
	do {
	Total = Total + i;
	i = i + 1;
	}
	while (i <= Num);
	printf ("Resultado: %d\n", Total);
	return 0;
}
	
