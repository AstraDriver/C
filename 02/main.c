#include <stdio.h>
#include <string.h>

// void ft_strcpy(char *dest, char *src);
// char *ft_strncpy(char *dest, char *src, unsigned int n);
// char *ft_strlowcase(char *str);
// unsigned int ft_strlcpy(char *dest, char *src, unsigned int size);
// int ft_strlen(char *str);
// int		ft_putstr_non_printable(char *str);
// void    ft_putchar(char c);
void ft_print_memory(char *str, int size);



int main(void) {


    char	*t = {"Bonjour les aminches\t\n\tc  est fou.tout.ce qu on peut faire avec\t\n\tprint_memory\n\n\n\tlol.lol.  "};
    
    ft_print_memory(t, 16);

    // ft_putstr_non_printable(126 + '}');	/* Отправляем нужную нам строку в функцию для печати и проверки отображения нечитаемых символов *
    return (0);	



    // printf("%d\n", ft_strlcpy(buf, t, 9));
    // // printf("%d", strlcpy(buf, t, 10));
    // printf("%s", buf);
    // while (str1[i]) {    
    //     i++;
    // }
    // if (str1[i] == '\0')
    //         printf("HER");


}