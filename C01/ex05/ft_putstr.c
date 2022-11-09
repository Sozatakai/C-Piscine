#include <unistd.h>

void ft_putstr(char *str)
{
	while (*str != '\0')
	{
		write(1, &*str, 1);
		write(1, "\n", 1);
		str++;
	}
}

int main(void)
{
	char cadena[] = "Hola buenas";
	char *cad = cadena;

	ft_putstr(cad);
	return (0);
}
