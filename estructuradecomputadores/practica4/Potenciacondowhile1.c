#include <stdio.h>
int main()
{
	int Base, Exp, Pot, i;
	printf ("Escribe un número (base): ");
	scanf ("%d", &Base);
	printf ("Escribe un número (exponente): ");
	scanf ("%d", &Exp);
	if ((Base >= 1) && (Exp >=1)) {
			Pot =1;
			i =1;
		do {
			Pot = Pot * Base;
			Exp = Exp -1;
		} while (Exp >= 1);
		printf ("El resultado de la potencia es: %d\n", Pot);
	}
	else{
		printf ("No es un número representable en nuestro intervalo\n");
	}
	return 0;
}
