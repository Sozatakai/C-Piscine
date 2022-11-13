#include <unistd.h>
#include <stdio.h>
#include <string.h>

char	*ft_strcpy(char *dest, char *arc) //dest es la variable de destino y arc la cadena que va a copiar
{
	int i;                            //básicamente estamos copiando el contenido de la variable arc
					  //dentro de la variable destino y cuando terminamos indicamos
	i = 0;				  //que es el final añadiendo que en la ultima posicion = '\0'
	while (arc[i] != '\0')
	{
		dest[i] = arc[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

int	main(void)
{
	char destino[] = "Jose";
	char cadenaCpy[] = "Jose Rodriguez";
	char *actualizacion;

	printf("\n\tcadenaCpy: %s\n\tdestino: %s\n", cadenaCpy, destino);
	actualizacion = ft_strcpy(destino, cadenaCpy); //Lo que hay en cadenaCpy se copia en destino y el resultao
						       //lo guardamos en actualizacion
	printf("\n\tresultadoDestino: %s\n\tactualización: %s\n", destino, actualizacion);
}

