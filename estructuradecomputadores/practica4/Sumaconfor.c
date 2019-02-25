#include <stdio.h>
int main()
{
	int Num, Total, i;
	printf ("Dime el número que quieres calcular: ");
	scanf ("%d", &Num);
	Total = 0;
	i = 1;
	for (((i = 1) && (Total = 1));(( i <= Num) && (Num >= 1));((i = i + 1)&&(Total = Total +i))){	printf ("Este es el resultado de la suma: %d\n", Total);
}
	
return 0;
}
	
	
