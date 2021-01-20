
char *ft_strncpy(char *dest, char *src, unsigned int n) {
   unsigned int i = 0;

   while (i < n) {
       if (src[i] != '\0')
            dest[i] = src[i]; 
       else  
            dest[i] = '\0';
       i++;
    }
    return (dest);
}
