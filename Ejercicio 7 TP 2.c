#include <stdio.h>
#include <string.h>

int main()
{
	char palabras[5][100],palabra1[50];
	int x,y;
	
	for(x=0;x<5;x++)
	{
		printf("Ingrese una palabra: ");
		scanf("%s", palabras[x]);
	}
	
	strcpy(palabra1,palabras[0]);
	
	for(x=1;x<5;x++)
	{
		if(strlen(palabras[x]) > strlen(palabra1))
		{
			strcpy(palabra1,palabras[x]);
		}
	}
	
	printf("La cadena mas larga es: %s",palabra1);
}
