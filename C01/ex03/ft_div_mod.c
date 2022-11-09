#include <unistd.h>

void ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}

int main(void)
{
	int rdiv;
	int rmod;
	int *div = &rdiv;
	int *mod = &rmod;

	ft_div_mod(10,2,div,mod);
	printf("%d\n",rdiv);
	printf("%d\n",rmod);
	return (0);
}
