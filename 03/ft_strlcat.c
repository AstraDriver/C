

char *ft_strlcat(char *dest, char *src, unsigned int size) {

    char *ptr;

    ptr = dest;
    
    while (*dest){
        *dest++;
    }
    while (*src &&  size-- - 1 > 0){
        *dest++ = *src++;
    }
    *dest = '\0';
    return (ptr);

}