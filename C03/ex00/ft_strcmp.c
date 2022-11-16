#include <stdio.h>
#include <unistd.h>

int	ft_strcmp(char *s1, char *s2)
{
	int i;

	i = 0;
	while (s1[i] == s2[i])
	{
		write(1, &s1[i], 1);
		i++;
	}
	return (s1[i] - s2[i]);
}

int	main(void)
{
	char txt1[] = "zolaaaa";
	char txt2[] = "holaaaaaaaz";
	char *s1 = txt1;
	char *s2 = txt2;
	int alpha;

	alpha = ft_strcmp(s1, s2);
	printf("Alpha es: %i\n", alpha);
	return (0);
}
