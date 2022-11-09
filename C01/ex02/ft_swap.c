#include <unistd.h>

void ft_swap(int *a, int *b)
{
	int r;

	r = *a;
	*a = *b;
	*b = r;
}

int main(void)
{
	int num1 = 0;
	int num2 = 42;

	int *n1 = &num1;
	int *n2 = &num2;

	ft_swap(n1, n2);

	printf("%d\n", num1);
	printf("%d\n", num2);
	return (0);
}
