#include <stdio.h>

int ft_strlen(char *str);

unsigned int ft_strlcpy(char *dest, char *src, unsigned int size) {

    int i = 0;

    while (src[i] && i < size - 1) {
        dest[i] = src[i];
        i++;
    }
    dest[i] = '\0';
    return (ft_strlen(src));


}