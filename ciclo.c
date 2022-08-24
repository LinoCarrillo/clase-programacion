/*
Realizo: Lino Carrillo
Fecha 24 ago 2022

estructuras de control 
        while
        ciclo.c
*/

#include <stdio.h>
int main()
{
	int contador,num;
	contador=1;
	printf("escribe un numero entero: ");
	scanf("%d",&num);
	while (contador <=num) //se ejecutara el printf y el contador mientras se cumpla la condición
	{
		printf("contador= %d\n",contador);
		contador++; //esto es igual a escrivir contador=contador+1
	}
	return(0);
}        