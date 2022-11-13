#include <stdio.h>

int	ft_str_is_lowercase(char *str)
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
		if(str[index] >= 'a' && str[index] <= 'z')
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
	return(alpha);
}

int	main(void)
{
	char txt[] = "asgsad2";
	char *str = txt;
	int alpha;

	alpha = ft_str_is_lowercase(str);
	printf("Alpha: %i\n", alpha);
	return (0);
}
