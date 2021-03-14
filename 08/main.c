// #include <unistd.h>
// #include "ft_boolean.h"
// #include <stdio.h>


// void ft_putstr(char *str) {
//     while(*str) {
//         write(1, str++, 1);
//     }
// }

// t_bool ft_is_even(int nbr) {
//     return ((EVEN(nbr)) ? TRUE : FALSE);
// }

// int main(int argc, char *argv[]) {

//     (void)argc;
//     if (ft_is_even(argc - 1) == TRUE)
//         ft_putstr(EVEN_MSG);
//     else 
//         ft_putstr(ODD_MSG);
//     return SUCCESS;

//     printf("%d\n", ABS(10));
// }



#include <stdio.h>
#include <stdlib.h>
#include "ft_stock_str.h"
struct s_stock_str	*ft_strs_to_tab(int ac, char **av);


int main(int argc, char **argv) {

    ft_show_tab(ft_strs_to_tab(argc -1, ++argv));
    
    // printf("%s ", ft_strs_to_tab(argc -1, ++argv));
    // ft_strs_to_tab(argc -1, ++argv);

    return 0;

}