#include <stdio.h>

char	*ft_strncpy(char *dest, char*src, unsigned int n)
{
	int index;							//En esta variante de strcpy crearemos un nuevo parametro
								        //sera n, para definir que caracteres queremos copiar de la cadena
	for(index = 0; index < n && src[index] != '\0'; index++)	//de texto, y esta vez haremos un for debido a la facilidad que nos ofrece
	{								//pero tambien se podria hacer con while
		dest[index] = src[index];
	}
	for( ; index < n; index++)
	{
		dest[index] = '\0';
	}
	return (dest);
}

int	main(void)
{
	char dest[20];
	char src[] = "Hola buenas";

	char *final;							//Crearemos una variable destino y una variable fuente, y por ultimo un
									//pointer final donde recogeremos el resultado de la copia
	final = ft_strncpy(dest, src, 4);
	printf("\n\t final: %s\n\t source: %s\n\t", final, src);
	return (0);
}
