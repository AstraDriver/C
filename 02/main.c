#include <stdio.h>

// void ft_strcpy(char *dest, char *src);
char *ft_strncpy(char *dest, char *src, unsigned int n);



int main(void) {


    char *str1 = "789456";
    char *str2 = "123456789 10 11 12";
    int i = 0;


    printf("%s", ft_strncpy(str1, str2, 5));
    // while (str1[i]) {    
    //     i++;
    // }
    // if (str1[i] == '\0')
    //         printf("HER");


}