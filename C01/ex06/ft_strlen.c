#include <unistd.h>

int ft_strlen(char *str)
{
	int strL = 0;
	while (*str != '\0')
	{
		*str++;
		strL++;
	}
	return (strL);
}


int main(void)
{
	char cadena[] = "Hola";
	char *cad = cadena;

	int num = ft_strlen(cad);
	printf("%d\n",num);
	return (0);
}
