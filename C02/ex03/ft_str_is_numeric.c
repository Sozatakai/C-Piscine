#include <stdio.h>

int	ft_str_is_numeric(char *str)
{
	int index;
	int alpha;

	index = 0;

	if(str[index] == '\0')
	{
		alpha = 1;
	}

	while (str[index] != '\0')
	{
		if(str[index] >= '0' && str[index] <= '9')
		{
			alpha = 1;
		}
		else
		{
			alpha = 0;
			break;
		}
		index++;
	}
	return (alpha);
}

int	main(void)
{
	char txt[] = "";
	char *str = txt;

	int alpha;

	alpha = ft_str_is_numeric(str);
	printf("Alpha: %i\n", alpha);
	return (0);
}

