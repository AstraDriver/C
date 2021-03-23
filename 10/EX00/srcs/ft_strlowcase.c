
char *ft_strlowcase(char *str) {

    int i = 0;
    char *p = str;
    
    while (p[i] != '\0') {
        if ((p[i] >= 'A') && (p[i] <= 'Z')) 
            p[i] += 'a' - 'A';
        i++; 
    }
    return (p);
}