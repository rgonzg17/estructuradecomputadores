#include <stdio.h>
int main ()
{
	int Base, Exp, Pot, i;
	printf ("Escribe un número (base): ");
	scanf ("%d", &Base);
	printf ("Escribe un número (exponente): ");
	scanf ("%d", &Exp);
	Pot = 1;
	i = 1;
		do {
			if (Exp >= 1) {
				Pot = Pot*Base;
				Exp = Exp - 1;
			}
	}
		while ((Base >= 1) && (Exp >= 1));
			printf ("La potencia es: ");
			printf ("%d\n", Pot);
		
	return 0;
}
