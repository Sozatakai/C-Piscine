#include <stdio.h>

int	ft_str_is_alpha(char *str)
{
	int index;
	int alpha;
	
	index = 0;
	while (str[index] != '\0')
	{
		if(str[index] >= 'a' && str[index] <= 'z' || str[index] >= 'A' && str[index] <= 'Z')
		{
			alpha = 0;
		}
		else
		{
			alpha = 1;
			break;
		}
		index++;
	}
	return (alpha);
}

int	main(void)
{
	char *string = "asdA";
	char *str;
	int alpha;


	alpha = ft_str_is_alpha(string);

	printf("Alpha es: %i\n", alpha);
	return (0);
}
