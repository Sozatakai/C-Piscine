#include <unistd.h>

void ft_ultimate_div_mod(int *a, int *b)
{
	int auxA = *a;
	*a = auxA / *b;
	*b = auxA % *b;
	
}

int main(void)
{
	int num1 = 10;
	int num2 = 2;

	int *a = &num1;
	int *b = &num2;

	ft_ultimate_div_mod(a,b);
	printf("%d\n", num1);
	printf("%d\n", num2);
	return (0);
}
