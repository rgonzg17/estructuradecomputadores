#include <stdio.h>
#include <math.h>
#define Pi 3.14159
void volumenCono (float radio, float altura){
	float resultado;
	resultado = Pi*pow(radio,2)*altura*1/3;
	printf("El resultado del volumen del cono es: %f\n ", resultado);
}
void VolumenOctaedro (float lado1, float lado2, float altura) {
	float resultado;
	resultado = lado1*lado2*altura;
	printf ("El resultado del volumen del octaedro es: %f\n", resultado);
} 

int main(int argc, char const *argv[])
{
	int opcion1;
	do {
	float r, h, l1, l2;
	printf("¿Que área quieres calcular?\n (1) Volumen Cono\n (2) Volumen Octaedro\n (3) Salir\n ");
	scanf ("%d", &opcion1);
		switch (opcion1){
		case 1:
		
	
		printf("Introduce las medidas de la altura: " );
		scanf ("%f", &h);
		printf("Introduce las medidas del radio: ");
		scanf ("%f", &r);
		volumenCono (r,h);
		break;

		case 2:
		printf("Introduce las medidas del lado1: ");
		scanf ("%f", &l1 );
		printf ("Introduce las medidas del lado2: ");
		scanf ("%f", &l2);	
		printf ("Introduce las medidas de la altura: ");
		scanf ("%f", &h);
		VolumenOctaedro (l1, l2,h);	
		break;

		case 3:
		printf("Salir del programa\n");
		break;

		default: 
		printf("Introduce una de las opciones dadas anteriormente 1,2,3\n");


}
}
		while (opcion1 != 3);




return 0;
}
