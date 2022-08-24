/*Realizo: Lino Carrillo
Fecha 23 ago 2022

lectura por teclado
lectura.c
******************************************/

#include<stdio.h>

int main()
{
	int val_1;
	int val_2;
	printf("Vamos a capturar 2 valores y comparar si son iguales\n");
	printf("escribe el primer valor: ");
	scanf("%d",&val_1);
	printf("Escribe el segundo valor: ");
	scanf("%d",&val_2);
	if (val_1==val_2)
	{
		printf("los valores son iguales\n");
	}
	else if (val_1>val_2)
	{
		printf("valor1 es mayor que valor2\n");
	}
	else
	{
		printf("valor 2 es mayor que valor 1");
	}

	
	
	
	return (0);
}