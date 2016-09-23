#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	float presion,volumen,temperatura,masa;
	int continuar;
	system("cls");
	fflush(stdin);
	system("color F0");
	do{
		printf("\t\t\t\t\tMasa de Aire\t\t\t\t\t");
		printf("\n\n\t\tPresion: ");
		scanf("%f",&presion);
		printf("\n\t\tVolumen: ");
		scanf("%f",&volumen);
		printf("\n\t\tTemperatura: ");
		scanf("%f",&temperatura);
		masa=(presion*volumen)/(0.37*(temperatura+460));
		printf("\n\t\tEl valor de la Masa de Aires es: %.3f",masa);
		printf("\n\n\t\tPresiona (0) para continuar: ");
		scanf("%d",&continuar);
		system ("cls");
	}
	while(continuar==0);
	printf("\t\t\t\t\tMasa de Aire\t\t\t\t\t");
	printf("\n\n\t\t\t\t\tHasta luego\t\t\t\t\t");
	return 0;
}

