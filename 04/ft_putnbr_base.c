
#include <stdio.h>

int ft_strstr(char *str, char to_find) {

    while (*str) {
        if (*str++ == to_find)
            return (1);
    }
    return (0);

}


int		ft_putnbr_base(int nbr, char *base) {

    int i = 0;

    while (base[i]){
        if (base[i] == '+' || base[i] == '-')
            return (2);
        if (ft_strstr(&base[i + 1], base[i]))
            return (3);    
        i++;
    }
    if (i <= 1)
        return (1);
    
}