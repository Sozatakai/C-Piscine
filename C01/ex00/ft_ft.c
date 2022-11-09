#include <unistd.h>

void ft_ft(int *nbr)
{

	*nbr = 42;
}

int main(void)
{
	int num;
	int *nb_ft = &num;
	ft_ft(nb_ft);
	printf("%u\n", num);
	return (0);
}
