#include "ft_stock_str.h"
#include <stdlib.h>

// char *ft_strdup(char *src);

// int ft_strlen(char *str){
//     int i = 0;
    
//     while (str[i]){
//         i++;
//     }
//     return (i);
// }

struct s_stock_str	*ft_strs_to_tab(int ac, char **av) {

    int i = 0;
    t_stock_str *tab;
    if ((tab = (t_stock_str *)malloc(sizeof(t_stock_str) * (ac + 1))) == ((void *)0))
		return ((void *)0);

    while (ac--) {
        tab[i].size = ft_strlen(*av);
        tab[i].str = *av;
        tab[i++].copy = ft_strdup(*av++);
    }
    return (tab);
}