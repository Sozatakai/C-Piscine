#include <unistd.h>

void ft_putnbr(int nb){
	write(1, &nb, sizeof(nb));
}

int main(){
	ft_putnbr(42+48);
	return 0;
}
