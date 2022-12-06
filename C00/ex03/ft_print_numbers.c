#include <unistd.h>

void ft_putchar(int c)
{
	write(1, &c, 1);
}

void ft_print_numbers()
{
	char n = '0';
	while(n<='9')
	{
		ft_putchar(n);
		n++;
	}
}

int main(void)
{
	ft_print_numbers();
	return 0;
}
