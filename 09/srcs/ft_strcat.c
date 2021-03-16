
char *ft_strcat(char *dest, char *src) {

    char *ptr;
    int i = 0;

    ptr = dest;
    
    while (dest[i]){
        i++;
    }
    while (*src){
        dest[i++] = *src++;
    }
    dest[i] = '\0';
    return (ptr);
}