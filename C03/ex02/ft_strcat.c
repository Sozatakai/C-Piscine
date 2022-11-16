char	*ft_strcat(char *dest, char *src)
{
	char	*txt_final;


	txt_final = dest;
	while (*dest)
		dest++;
	while (*src)
		*(dest++) = *(src++);
	*dest = '\0';
	return (txt_final);
}
