#include <stdio.h>
int main()
{
	int Num;
	printf ("Escribe la nota numérica: ");
	scanf ("%d", &Num);
	switch (Num) {
	case 5:
	case 6: printf ("Aprobado\n");
		break;
	case 7:
	case 8: printf ("Notable\n");
		break;
	case 9:
	case 10: printf ("Sobresaliente\n");
		break;
	default:
	if (Num <=4 ){		
	printf ("Suspenso\n");
	}
	else {
	printf ("No es una nota que entre en el intervalo evaulable\n");
	}
}

return 0;
}
