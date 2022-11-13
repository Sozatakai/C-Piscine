#include <stdio.h>

char	*ft_strcapitalize(char *str)
{
	int index;
	
	index = 0;

	while (str[index] != '\0')
	{
		if(index == 0 && str[index] >= 'a' && str[index] <= 'z')   //primer caracter
		{
			str[index] = str[index] - 32;
		}
		else if(index != 0 && str[index - 1] >= 'a' && str[index - 1] <= 'z' || index != 0 && str[index - 1] >= 'A' && str[index - 1] <= 'Z')   //si el caracter de la izquierda es una letra
		{
			if(str[index] >= 'A' && str[index] <= 'Z')   //revisa si este caracter es una letra y si esta en mayusculas pasala a minusculas
			{
				str[index] = str[index] + 32;
			}
		}
		else
		{
			if(str[index] >= 'a' && str[index] <= 'z')    //si no es ninguno de los casos anteriores y solo si el caracter actual es una minuscula pasala a mayuscula
				str[index] = str[index] - 32;         //si no es ninguna minuscula no hagas nada
		}
		index++;
	}
	return (str);
}

int	main(void)
{
	char txt[] = "hOLa Que tAl,buenos di   as";
	char *str = txt;

	ft_strcapitalize(str);
	printf("Texto: %s\n", str);
	return (0);
}
