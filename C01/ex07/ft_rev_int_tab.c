#include <unistd.h>

void ft_rev_int_tab(int *tab, int size)
{
	int c = 0;
	int index = size - 1;
	int save[size];
	//la primera condicion es para pasar los datos de la array original a la array auxiliar
	while (index >= 0)
	{
		save[c] = tab[index];
		c++;
		index--;
	}
	//una vez tenemos la array auxiliar con los valores de la array original invertidos, volvemos a meter los
	//valores de la array auxiliar a la array original, para ello, reseteamos c a 0 pq lo usaremos como indice
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
