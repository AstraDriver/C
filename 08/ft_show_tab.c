#include "ft_stock_str.h"

void ft_show_tab(struct s_stock_str *par) {


    int i = 0;
    while(par[i].str) {
        ft_putstr(par[i].str);
        ft_putchar('\n');
        ft_putnbr(par[i].size);
        ft_putchar('\n');
        ft_putstr(par[i++].copy);
        ft_putchar('\n');
    }

}
