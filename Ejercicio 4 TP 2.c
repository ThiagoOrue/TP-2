#include <stdio.h>
#include <string.h>

int main()
{
    char cadena[120], caracter1[1], caracter2[1];
	int x,y,longitud;
	
    printf("Ingrese una cadena de caracteres: ");
	fflush(stdin);
	gets(cadena);
	fflush(stdin);
	
    printf("Ingrese el caracter a reemplazar: ");
    scanf(" %c",&caracter1);

    printf("Ingrese el nuevo caracter: ");
    scanf(" %c",&caracter2);

    longitud = strlen(cadena);
    	
		for(x = 0; x < longitud; x++)
		{
        	if(cadena[x] == caracter1[0])
			{
            	cadena[x] = caracter2[0];
        	}
        	
    	}

    printf("La cadena modificada es: %s",cadena);

}
