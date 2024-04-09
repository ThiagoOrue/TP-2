#include <stdio.h>
#include <string.h>

int main()
{
	int x,y;
	char Nombre [40];
	
	printf("Ingrese su nombre: ");
	fflush(stdin);
	gets(Nombre);
	fflush(stdin);
	
	printf("%s",Nombre);
}
