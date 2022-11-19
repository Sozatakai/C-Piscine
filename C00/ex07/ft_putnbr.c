#include <unistd.h>

void ft_putnbr(int nb)
{
	if(nb == -2147483648)
	{
		write(1, "-", 1);
		write(1, "2", 1);
		ft_putnbr(147483648);
	}
	else if(nb < 0)
	{
		write(1, "-", 1);
		nb = -nb;
		ft_putnbr(nb);
	}
	else if(nb > 9)
	{
		ft_putnbr(nb / 10);
		ft_putnbr(nb % 10);
	}
	else
	{
		nb = nb + 48;
		write(1, &nb, 1);
	}
}

int main()
{
	ft_putnbr(-2147483648);
}
