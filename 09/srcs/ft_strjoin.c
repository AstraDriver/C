#include <stdlib.h>
#include <stdio.h>

int ft_strlen(char *str);
char* ft_strcat(char *dest, char *src);

char	*ft_strjoin(int size, char **strs, char *sep) {

    int len_str = 0;
    int i = 0;
    char *buf;
    

    while (strs[i])
        len_str += ft_strlen(strs[i++] + ft_strlen(sep));
    len_str += (size - 1) * ft_strlen(sep);
    if ((buf = (char *)malloc((sizeof(char) * len_str) + 1)) == ((void *)0))
		return ((void *)0);
    while (*strs) {
        buf = ft_strcat(buf, *strs);
        if (*++strs)
            buf = ft_strcat(buf, sep);
    }    
    return buf;
}