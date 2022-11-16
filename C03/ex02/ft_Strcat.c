#include <stdio.h>

int	ft_strlen(char *str)
{
	int index;

	index = 0;
	while (str[index] != '\0')
	{
		index++;
	}
	return (index);
}

char	*ft_strcat(char *dest, char *src)
{
	int index;
	int index2;
	int src_l;

	src_l = ft_strlen(src);
	index = 0;
	index2 = 0;
	while (dest[index])
	{
		index++;
	}
	if(index != 0)
	{
		while(src_l >= 0)
		{
			dest[index] = src[index2];
			index++;
			index2++;
			src_l--;
		}
	}
}

int	main(void)
{
	char txt[] = "Hola";          //destino
	char txt2[] = "Que tal";      //modificacion
	char *dest = txt;
	char *src = txt2;

	ft_strcat(dest, src);
	printf("Texto destino: %s\n", dest);
	return (0);
}
