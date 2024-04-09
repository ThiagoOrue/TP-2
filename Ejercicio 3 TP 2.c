#include <stdio.h>
#include <string.h>

int main()
{
    char cadena[150];
    int x,y,palindromo = 1,longitud;

    printf("Ingrese una cadena de caracteres: ");
    fflush(stdin);
	gets(cadena);
	fflush(stdin);

    longitud = strlen(cadena);

    	for (x = 1; x <= longitud / 2; x++)
		{
        	if (cadena[x] != cadena[longitud - x - 1])
			{
        	    palindromo = 0;
        	    
        	}
    	}

    	if (palindromo != 0) 
		{
       		printf("%s es un palindromo.",cadena);
		} 
		else 
		{
    	    printf("%s no es un palindromo.",cadena);
    	}

}

