#include <stdio.h>

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int index;
	unsigned int index2;

	index = 0;
	while (dest[index])
		index++;

	index2 = 0;
	while (src[index2] && index2 < nb)
		dest[index++] = src[index2++];
	dest[index] = '\0';
	return (dest);
}

int	main()
{
	char src[] = "que tal";			
	char dest[] = "Hola ";
	printf("%s", ft_strncat(dest, src, 7));
}
