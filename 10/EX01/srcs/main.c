#include "../includes/ft.h"

int main(int argc, char *argv[])
{
    (void) argc;
    int i = 1;
    // ft_putstr(argv[3]);
    // ft_putnbr(ft_strcmp(argv[2], "p"));
    // while (argv[i]){
    //     if (ft_strcmp(argv[i++], "p") == 0) {
    //         ft_write_files(i - 1, argv, argv[i]);
    //     }
    // }
    i = 1;
    while (argv[i])
        ft_display_file(argc, argv[i++]);
    return 0;
}
