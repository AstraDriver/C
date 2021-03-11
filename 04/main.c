
#include <stdio.h>
#include <stdlib.h>

// void ft_is_negative(int i);
// void ft_putchar(char c);
// // // void ft_print_comb();
// // void ft_print_comb2();
// void ft_putnbr(int nb);
// int ft_strcmp(char *s1, char *s2);
// int ft_strncmp(char *s1, char *s2, unsigned int n);
// char* ft_strncat(char *dest, char *src, unsigned int nb);
// char *ft_strstr(char *str, char *to_find);
// char *ft_strlcat(char *dest, char *src, unsigned int size);
// int ft_atoi(char *str);
// int		ft_putnbr_base(int nbr, char *base);
int		ft_atoi_base(char *str, char *base);

int main(void) {
    // ft_putchar('s');
    // ft_is_negative(-1);
    // ft_print_comb();
    // ft_print_comb2();
    // ft_putnbr(-100000002);
    // printf("%d",ft_strncmp("123456", "123450", 5));

    // char buf[40] = {"Hello"};
    // char buf[] = {'0', '1', '2', '3', '\0', '\0', '\0', '\0', '\0'}; 
    // int size_buf = 10;
    // int i = 0;
    // char buf[size_buf];
    // while (i < size_buf) {
    //     buf[i++] = '0';
    // }
    // buf[i] = '\0';
    // printf("%d\n", ft_atoi(" 100a1"));
    // printf("%d", atoi(" 100a1"));
    // ft_putnbr_base(10, "a");
    printf("%d", ft_atoi_base("  ++A", "0123456789ABCDEF"));

    
    
    
    
    return (0);
}