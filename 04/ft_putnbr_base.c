
#include <stdio.h>
void ft_putchar(char c);

int ft_strlen(char *str){
    int i = 0;

    while (str[i]){
        i++;
    }
    return (i);

}

int ft_strstr(char *str, char to_find) {

    while (*str) {
        if (*str++ == to_find)
            return (1);
    }
    return (0);
}

void ft_putnbr(int nb, char *base) {

    if (nb < 0) {
        ft_putchar('-');
        nb *= -1;
    }

    if (nb >= ft_strlen(base)){
		ft_putnbr(nb / ft_strlen(base), base);
		ft_putnbr(nb % ft_strlen(base), base);
	} else {
		ft_putchar(base[nb]);
	}
}

int ft_base_is_valid(char *base){
    int i = 0;

    while (base[i]){
        if (base[i] == '+' || base[i] == '-' || !base[i + 1])
            return 1;
        if (!(base[i] >= 32 || base[i] <= 126))
            return 1;
        if (ft_strstr(&base[i + 1], base[i]))
            return 1;    
        i++;
    }
    return 0;
}


void		ft_putnbr_base(int nbr, char *base) {

    if (ft_base_is_valid)
        return;
    ft_putnbr(nbr, base);

}