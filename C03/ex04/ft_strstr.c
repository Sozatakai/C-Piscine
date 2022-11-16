#include <stdio.h>

char	*ft_strstr(char *str, char *to_find)
{
	int index;
	int index2;
	char *message;

	index = 0;
	index2 = 0;
	while (str[index] != '\0')
	{
		if(str[index] == to_find[index2])
		{
			index++;
			index2++;
		}
		else if (to_find[index2] == '\0')
		{
			message = "string finded";
		}
		else
		{
			index++;
		}
	}
	return (message);

}

int	main(void)
{
	char txt[] = "Madrid es la capital de España";
	char to_f[] = "Madrid";
	char *str = txt;
	char *to_find = to_f;
	char *message;

	message = ft_strstr(str, to_find);
	printf("Fuction: %s\n", message);
	return (0);
}
