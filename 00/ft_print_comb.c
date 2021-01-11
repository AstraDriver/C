#include <unistd.h>
#include <stdio.h>

void ft_putchar(char c);

void ft_print_comb() {
    int f = 0;
    int s = 0;
    int t = 0;

    while (f <= 9) {
        if (f < s && s < t) {
            ft_putchar(f + 48);
            ft_putchar(s + 48);
            ft_putchar(t + 48);
            if (f != 7) {
                ft_putchar(',');
                ft_putchar(' ');
            }
        }
        if (t == 9)
            t = s++;
        if (s == 9)
            s = f++;
        if (f == 9)
            break;
        t++;
    }
    ft_putchar('\n');
}