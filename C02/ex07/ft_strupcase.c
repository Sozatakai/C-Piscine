#include <stdio.h>
#include <ctype.h>

char	ft_strupcase(char *str)
{
	int index;

	index = 0;

	while (str[index] != '\0')
	{
		if(str[index] >= 'a' && str[index] <= 'z')
		{
			str[index] = str[index] - 32;
		}
		//str[index] = toupper(str[index]);
		index++;
	}
	return (*str);
}

int	main(void)
{
	char txt[] = "BUenas";
	char *str = txt;

	ft_strupcase(str);
	printf("Texto: %s\n", str);
	return (0);
}
