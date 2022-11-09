#include <unistd.h>

void ft_ultimate_ft(int *********nbr)
{
	*********nbr = 42;
}

int main(void)
{
	int num;
	int *n = &num;
	int **n2 = &n;
	int ***n3 = &n2;
	int ****n4 = &n3;
	int *****n5 = &n4;
	int ******n6 = &n5;
	int *******n7 = &n6;
	int ********n8 = &n7;
	int *********n9 = &n8;
	ft_ultimate_ft(n9);
	printf("%u\n", num);
}
