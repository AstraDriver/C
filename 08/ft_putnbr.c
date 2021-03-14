#include <unistd.h>
#include "ft_stock_str.h"
// void ft_putchar(char c);

void ft_putnbr(int nb) {

    long int    long_nb;

    long_nb     = nb;

    if (long_nb < 0) 
    {
        ft_putchar('-');
        long_nb *= -1;
    }

    if (long_nb >= 10)
	{
		ft_putnbr(long_nb / 10);
		ft_putnbr(long_nb % 10);
	}
	else

	{
		ft_putchar(long_nb + '0');
	}
}