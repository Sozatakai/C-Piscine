char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	char	*txt_final;
	int index;
	int index2;

	index = 0;
	txt_final = dest;
	while (dest[index])
		index++;

	index2 = 0;
	while (src[index2] && index2 < n)
		dest[index++] = src[index2++];
	dest[index] = '\0';
	return (dest);
}
