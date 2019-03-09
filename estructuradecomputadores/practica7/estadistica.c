#include <stdio.h>
#include <math.h>
#define TAN 15
float media (int vector[TAN]){
			int suma=0;
	for (int i=0;i<TAN;++i){
		suma =suma+ vector [i];
	}
	int media =suma/TAN;
	return (media);
}
float varianza (int vector [TAN],float media){
		float suma=0;
	for (int i = 0; i < TAN; ++i){
	
		suma =suma + pow(vector[i]-media,2);
	}
		float varianza=suma/TAN;
		return varianza;
	}
		

float desviacion (float varianza){
	
		float desviacion = sqrt(varianza);
		return desviacion;
}

int main(int argc, char const *argv[])
{
	int vector [TAN];
	for (int i = 0; i < TAN; ++i){
		printf("Posición: %d, Elige un número: ",i +1);
		scanf ("%d",&vector [i]);
	}
	float media1 = media(vector);
		printf ("El valor de la media es: %f\n", media1);
	float varianza1= varianza(vector, media1);
		printf ("El valor de la varianza es: %f\n", varianza1);
	float desviacion1 =desviacion(varianza1);
		printf ("El valor de la desviación es: %f\n", desviacion1);
	return 0;
}
