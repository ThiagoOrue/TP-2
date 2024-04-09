#include <stdio.h>
#include <string.h>

int main()
{
	int x,y,longitud;
	char palabra1[50],palabra2[50],palabra3[50],palabra4[50],palabra5[50],resultante[100];
	
	printf("Ingrese una palabra: ");
	fflush(stdin);
	gets(palabra1);
	fflush(stdin);
	printf("Ingrese una palabra: ");
	fflush(stdin);
	gets(palabra2);
	fflush(stdin);
	printf("Ingrese una palabra: ");
	fflush(stdin);
	gets(palabra3);
	fflush(stdin);
	printf("Ingrese una palabra: ");
	fflush(stdin);
	gets(palabra4);
	fflush(stdin);
	printf("Ingrese una palabra: ");
	fflush(stdin);
	gets(palabra5);
	fflush(stdin);
	
	longitud = strlen(palabra1);
	
		for(x=0;x<longitud;x++)
		{
			if(palabra1[x] == palabra2[x] && palabra1[x] == palabra3[x] && palabra1[x] == palabra4[x] && palabra1[x] == palabra5[x])
			{
				resultante[x] = palabra1[x];
			}
		}
		
		printf("Las letras que coinciden en las 5 palabras son: %s ",resultante);
}
