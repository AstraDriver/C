#include <stdio.h>
#include <string.h>

// void ft_strcpy(char *dest, char *src);
// char *ft_strncpy(char *dest, char *src, unsigned int n);
// char *ft_strlowcase(char *str);
// unsigned int ft_strlcpy(char *dest, char *src, unsigned int size);
// int ft_strlen(char *str);
int		ft_putstr_non_printable(char *str);
void    ft_putchar(char c);



int main(void) {



    char	*t = {"YOUR_D\nICK_ SO_\nBIG"};
    ft_putstr_non_printable(t);



    // printf("%d\n", ft_strlcpy(buf, t, 9));
    // // printf("%d", strlcpy(buf, t, 10));
    // printf("%s", buf);
    // while (str1[i]) {    
    //     i++;
    // }
    // if (str1[i] == '\0')
    //         printf("HER");


}