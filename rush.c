#include <unistd.h>

void Rush(int x, int y)
{
	int v;
	int h;
	int columna;
	int fila;

	v = 1;
	h = 1;
	columna = 1;
	fila = 1;


	while (columna <= x || fila <= y)
	{
		if(columna==1 && fila ==1)
		{
			write(1, "o", 1);
			columna++;
		}
		if(columna==x && fila ==1)
		{
			write(1, "o\n", 3);
			fila++;
		}
		if(1 < columna < x && fila ==1)
		{
			write(1, "-", 1);
		}
		columna++;

		if(fila != 1 && columna == 1)
		{
			write(1, "|", 1);
		}
		if(fila != 1 && columna == x)
		{
			write(1, "|\n", 3);
			fila++;
		}
		else
		{
			write(1, " ", 1);
			columna++;
		}
	}
}

int main(void)
{
	Rush(2,4);
	return (0);
}
