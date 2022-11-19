#include <unistd.h>

int	is_negative(char *str)
{
	int i;
	int nb;

	i = 0;
	nb = 1;
	while (str[i] != '\0')
	{
		if (str[i] == '-' || str[i] == '+' || str[i] == ' ')
		{
			if (str[i] == '-')
				nb = nb * -1;
			else if (str[i] == '+')
				nb = nb * 1;
			i++;
		}
		else
			break;
	}
	return (nb);
}

int	ft_op(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] == '-' || str[i] == '+' || str[i] == ' ')
			i++;
		else
			break;
	}
	return (i);
}

int	ft_atoi(char *str)
{
	int i;
	int nb;

	i = ft_op(str);
	nb = is_negative(str);

	if (nb < 0)
		write(1, "-", 1);
	while (str[i] != '\0')
	{
		if (str[i] >= '0' && str[i] <= '9')
			write(1, &str[i], 1);
		else
			break;
		i++;
	}
	return (nb);
}

int	main(int argc, char **argv)
{
	(void)argc;
	ft_atoi(argv[1]);
	return (0);
}
