#include <stdio.h>
int main ()
{
	int Base, Exp, Pot, i;
	printf ("Escriba un número (Base): ");
	scanf ("%d", &Base);
	printf ("Escribe el número (Exponente): ");
	scanf ("%d", &Exp);
	if ((Base >= 1) && (Exp >=1)) {
			Pot =1;
			for (i=1;i=Exp; i--) {
			Pot = Pot * Base;
			Exp= Exp -1;
			}
			printf ("La potencia es: %d\n", Pot);
	}
	else{
			printf ("No es un resultado representabl en nuestro intervalo\n");
	}
	return 0;
		}
