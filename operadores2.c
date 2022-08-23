/*Realizo: Lino Carrillo
Fecha 23 ago 2022
manejo de operadores l+ogicos y de relación
operadores2.c
******************************************/
#include<stdio.h>

int main()
{
	int A=0;
	int B=0;
	
	printf("Tabla de Verdad AND &&\n");
	printf("A=%d && B=%d = %d\n",A,B,A&&B);
	printf("A=%d && B=%d = %d\n",A,!B,A&&!B);
	printf("A=%d && B=%d = %d\n",!A,B,!A&&B);
	printf("A=%d && B=%d = %d\n",!A,!B,!A&&!B);	
	printf("Tabla de Verdad OR ||\n");
	printf("A    B\n");
	printf("%d || %d = %d\n",A,B,A||B);
	printf("%d || %d = %d\n",A,!B,A||!B);
	printf("%d || %d = %d\n",!A,B,!A||B);
	printf("%d || %d = %d\n",!A,!B,!A||!B);	

	return(0);
}