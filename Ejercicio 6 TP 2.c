#include <stdio.h>
#include <string.h>

int main()
{
	int x,y,lon1,lon2,aux1,aux2;
	char palabra1[40], palabra2[40];
	
	printf("Ingrese la primer palabra: ");
	scanf(" %s",palabra1);
		
	printf("Ingrese la segunda palabra: ");
	scanf(" %s",palabra2);

	lon1 = strlen(palabra1);
	lon2 = strlen(palabra2);
	
		if(lon1 != lon2)
		{
			printf("Las palabras no son anagramas.");
		}
		
		else
		{
			for(x = 0;x < lon1 - 1;x++)
			{
				for(y = 0;y < lon1 - x - 1;y++)
				{
					if(palabra1[y] > palabra1[y+1])
					{
						aux1 = palabra1[y];
						palabra1[y] = palabra1[y+1];
						palabra1[y+1] = aux1;
					}
				}
			}
			
			for(x = 0;x < lon2 - 1;x++)
			{
				for(y = 0;y < lon2 - x - 1;y++)
				{
					if(palabra2[y] > palabra2[y+1])
					{
						aux2 = palabra2[y];
						palabra2[y] = palabra2[y+1];
						palabra2[y+1] = aux2;
					}
				}
			}
			
			if(strcmp(palabra1,palabra2) == 0)
			{
				printf("Las palabras son anagramas.");
			}
			
			else
			{
				printf("Las palabras no son anagramas.");
			}
			
		}
		
}
