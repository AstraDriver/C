#include <unistd.h>
#include "ft_stock_str.h"

void ft_putchar(char c) {
    write(1, &c, 1);
}