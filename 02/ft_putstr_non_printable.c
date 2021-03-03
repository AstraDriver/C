
void    ft_putchar(char c);


void     dec_to_hex(char ch) {
    int digit = ch + 0;
    char *hex = "0123456789abcdef";
  
    if (digit / 16){
        ft_putchar('0');
        ft_putchar(hex[digit]);
    }
    else {
        ft_putchar(hex[digit / 16]);
        ft_putchar(hex[digit % 16]);
    }
}

int		ft_putstr_non_printable(char *str) {

    int i = 0;

    while (str[i]) {
        if (str[i] >= 32 && str[i] <= 126)
            ft_putchar(str[i]);
        else {
            ft_putchar('\\');
            dec_to_hex(str[i]);
        }
        i++;
    }
    return 0;
}


