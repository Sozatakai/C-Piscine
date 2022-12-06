#include <unistd.h>

int ft_strlen(char *str)
{
	int i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}


int main(void)
{
	char cadena[] = "Hola";
	char *cad = cadena;

	int num = ft_strlen(cad);
	printf("%d\n",num);
	return (0);
}
