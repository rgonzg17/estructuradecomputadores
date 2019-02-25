#include <stdio.h>
int main()
{
	int Num, Total, i;
	printf("Escribe cuantos números quieres sumar: ");
	scanf("%d", &Num);
	Total = 0;
	i = 1;
	while (( i >= 1) && (i <= Num)) { 
	Total = Total + i;
	i = i + 1;
	}
	printf("La suma es: %d\n", Total); 
	return 0; 
}
