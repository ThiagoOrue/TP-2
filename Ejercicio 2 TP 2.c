#include <stdio.h>
#include <string.h>

int main()
{
	int x,y, vocal = 0;
	char cadena[120];
	
	printf("Ingrese una cadena de caracteres: ");
	fflush(stdin);
	gets(cadena);
	fflush(stdin);
	
	int longitud = strlen(cadena);
	
		for(x=0;x<=longitud;x++)
		{
			if(cadena[x] == 'a' || cadena[x] == 'e' || cadena[x] == 'i' || cadena[x] == 'o' || cadena[x] == 'u' || cadena[x] == 'A' || cadena[x] == 'E' || cadena[x] == 'I' || cadena[x] == 'O' || cadena[x] == 'U')
			{
				vocal++;
			}
		}
		
		printf("%s tiene %d vocales.",cadena,vocal);
}
