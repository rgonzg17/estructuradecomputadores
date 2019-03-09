#include <stdio.h>
#define TAN 10
int main(int argc, char const *argv[])
{
	int nota [TAN];
	int i=0;
	for (i=0; i<TAN; i++){
		printf("Elige una nota del 1 al 10: \n");
		scanf ("%d", &nota [i]);
	}
		
	return 0;
}