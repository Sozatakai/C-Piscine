#include <stdio.h>

char	ft_strlowcase(char *str)
{
	int index;

	index = 0;
	while (str[index] >= 'A' && str[index] <= 'Z')
	{
		str[index] = str[index] + 32;
		index++;
	}
	return (*str);
}

int	main(void)
{
	char txt[] = "HOLA";
	char *str = txt;

	ft_strlowcase(str);
	printf("Texto: %s\n", str);
	return (0);
}
