void ft_putnbr(int nb);

int ft_atoi(char *str) {

    long int nb = 0;
    int minus = 1;


    while ((*str == ' ') || (*str == '\t') || (*str == '\n')
		|| (*str == '\v') || (*str == '\f') || (*str == '\r')){
        *str++;
    }
    while (*str == '-' || *str == '+'){
        if (*str == '-')
            minus *= -1;
        *str++;
    }
    while (*str >= '0' && *str <= '9'){
        nb =  nb + (*str - 48);
        if (*++str >= '0' && *str <= '9')
            nb *= 10;
    }
    return (nb * minus);


}