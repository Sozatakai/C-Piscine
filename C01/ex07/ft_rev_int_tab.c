#include <unistd.h>

void ft_rev_int_tab(int *tab, int size)
{
	int c = 0;
	int index = size - 1;
	int save[size];

	while (index >= 0)
	{
		save[c] = tab[index];
		c++;
		index--;
	}
	c = 0;
	while (c < size)
	{
		tab[c] = save[c];
		c++;
	}
}

int main(void)
{
	int i;
	int array[] = {12,23,3,4};
	int *tab = array;

	ft_rev_int_tab(tab,4);
	for(i = 0; i < 4; i++)
	{
		printf("%u\n",tab[i]);
	}
}
