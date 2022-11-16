#include <stdio.h>

char	*ft_strstr(char *str, char *to_find)
{
	while (*str != '\0')
	{
		if(*str == *to_find)
			return (str);
		str++;
	}
	return NULL;
}

int	main(void)
{
	char txt[] = "Hola mundo";
	char t_f[] = "Hola z";
	char *str = txt;
	char *to_find = t_f;
	char *message;

	message = ft_strstr(str, to_find);
	if(message == NULL)
		printf("No se encontro la cadena\n");
	else
		printf("Se encontro la cadena %s, en el texto %s\n", t_f, message);
	return (0);
}
