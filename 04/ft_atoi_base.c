
#include <stdio.h>

int ft_strlen(char *str){
    int i = 0;
    while (str[i]){
        i++;
    }
    return (i);
}

int ft_strstr(char *str, char to_find) {
    int i = 0;
    while (str[i]) {
        if (str[i] == to_find)
            return (i);
        i++;
    }
    return (0);
}

int ft_base_is_valid(char *base){
    int i = 0;
    while (base[i]){
        if (base[i] < 32 || base[i] > 126 || base[i] == '+' || base[i] == '-')
            return 1;
        if (ft_strstr(&base[i + 1], base[i]))                       
            return 1;    
        i++;
    }
    if (i < 2)
        return 1;
    return 0;
}

int		ft_recursive_power(int nb, int power)
{
	if (power == 0)
		nb = 1;
	if (power < 0)
		nb = 0;
	if (power-- > 1)
		nb = nb * ft_recursive_power(nb, power);
	return (nb);
}

int		ft_atoi_base(char *str, char *base) {

    int i = 0;
    int first_num = 0;
    int len_str = 0;
    int result = 0;
    int minus = 1;

    while ((str[i] == ' ') || (str[i] == '\t') || (str[i] == '\n')
		|| (str[i] == '\v') || (str[i] == '\f') || (str[i] == '\r'))
        i++;
    while (str[i] == '-' || str[i] == '+')
        str[i++] == '-' ? minus *= -1 : 1;
    first_num = i;
    while (ft_strstr(base, str[i]))
        i++;
    len_str = i - first_num;
    while (len_str >= 1){              
        result += ft_strstr(base, str[first_num++]) * ft_recursive_power(ft_strlen(base), len_str - 1);
        len_str--;
    }                                                                      
    return ((minus >= 0) ? result : -result);
}