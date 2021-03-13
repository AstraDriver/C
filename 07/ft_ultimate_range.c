int ft_ultimate_range(int **range, int min, int max) {

    int *buf;
    int i = 0;

    if ((buf = malloc(sizeof(*buf) * (max - min) + 1)) == ((void *)0) || min >= max) {
       return (-1);
    }
    while (min < max) {
        buf[i++] = min++;         
    }
    buf[i] = '\0';
    *range = buf;
    return (i);


}