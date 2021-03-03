void    ft_putchar(char c);

int		ft_putstr_non_printable(char *str) {

    int i = 0;

    while (str[i]) {
        if (str[i] >= 7 && str[i] <= 9) {
            ft_putchar('\\');
            ft_putchar(str[i]);
        }
        else if (str[i] == 10){
            ft_putchar('\\');
            ft_putchar('0');
            ft_putchar('A');
        }
        else if (str[i] == 11){
            ft_putchar('\\');
            ft_putchar('0');
            ft_putchar('B');
        }
        else if (str[i] == 12){
            ft_putchar('\\');
            ft_putchar('0');
            ft_putchar('C');
        }
        else if (str[i] == 13){
            ft_putchar('\\');
            ft_putchar('0');
            ft_putchar('D');
        }
        else 
            ft_putchar(str[i]);
        i++;
    }
    return 0;
}


