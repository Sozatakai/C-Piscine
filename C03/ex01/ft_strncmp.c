#include <stdio.h>

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int index;

	index = 0;
	if(n == 0)
		return (0);
	while (s1[index] == s2[index] && index < n)
	{
		index++;
	}
	if(index == n)
		index--;
	return (s1[index] - s2[index]);
}

int	main(void)
{
	char txt1[] = "holaa";
	char txt2[] = "hoaZº";
	char *s1 = txt1;
	char *s2 = txt2;
	unsigned int size = 3;
	int alpha;

	alpha = ft_strncmp(s1, s2, limit);

	printf("Alpha es: %i\n", alpha);
	return (0);
}
