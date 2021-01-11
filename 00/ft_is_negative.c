#include <unistd.h>
void ft_putchar(char c);

void ft_is_negative(int i) {
    if (i >= 0) 
        ft_putchar('P');
    else
        ft_putchar('N');
}