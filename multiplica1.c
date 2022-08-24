/*realizo: Lino Carrillo
Fecha 24 ago 2022
programa para generar una tabla de multiplicar indicada por el usuario
multiplica1.c
*/
#include <stdio.h>

int main()
{
	int tabla;
	int resul;
	int contador=1;
	printf("cual tabla de multiplicar quieres imprimir");
	scanf("%d",&tabla);
	while (contador<=10)
	{
		resul=contador*tabla;
		printf("%d x %d = %d\n",tabla,contador,resul);
		contador++;
	}
	return(0);
}