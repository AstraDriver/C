#include <stdlib.h>

int ft_strlen(char *str);
char *ft_strcpy(char *dest, char *src);


char *ft_strdup(char *src) {

    char *buf;
    return (((buf = malloc(sizeof(*src) * ft_strlen(src) + 1)) == 0) ? 0 : ft_strcpy(buf, src));

}