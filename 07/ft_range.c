#include <stdlib.h>
#include <stddef.h>


int	*ft_range(int min, int max) {

    int *buf;
    int i = 0;

    if ((buf = malloc(sizeof(*buf) * (max - min) + 1)) == ((void *)0) || min >= max) {
       return ((void *)0);
    }
    while (min < max)
        buf[i++] = min++;         
    buf[i] = '\0';
    return (buf);
}

