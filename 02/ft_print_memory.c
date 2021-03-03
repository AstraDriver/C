#include <stdio.h>

void ft_putchar(char c);
int ft_strlcpy(char *dest, char *src, int size);


void     dec_to_hex(char ch) {
    int digit = ch + 0;
    char *hex = "0123456789abcdef";
  
    if (digit < 16){
        ft_putchar('0');
        ft_putchar(hex[digit]);
    }
    else {
        ft_putchar(hex[digit / 16]);
        ft_putchar(hex[digit % 16]);
    }
}

 void print_space_and_dots(int size){
    if (size == 0) {
        ft_putchar(':');
    }
    if (!(size % 2)) {
        ft_putchar(' ');
    }
 }


int split_str(char *dest, char *str, int j) {
    int i = 0;
    while (str[j] && i < 16) {
        dest[i] = str[j];
        i++;
        j++;
    }
    dest[i] = '\0';
    return (j);
}



void ft_print_memory(char *str){

    int size_line = 0;
    int i = 0;
    char buf[16];
    int j = 0;

        
    while (str[j]){
        j = split_str(buf, str, j);
        while (buf[i]) {
            if (buf[i] >= 32 && buf[i] <= 126) {
                print_space_and_dots(size_line);
                dec_to_hex(buf[i]);
                size_line++;
            }
            else {
                print_space_and_dots(size_line);
                dec_to_hex(buf[i]);
                size_line++;
            }
            if (size_line == 16){
                ft_putchar('\n');
                size_line = 0;
            }
            i++;
        }
    i = 0;
    }

}