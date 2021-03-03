
char *ft_strlowcase(char *str) {

    int i = 0;
    
    while (str[i] != '\0') {
        if ((str[i] >= 'A') && (str[i] <= 'Z')) 
            str[i] += 'a' - 'A';
        i++; 
    }
    return (str);

    // char *str = st;

    // while (*str) {
    //     if (*str >= 'A' && *str <= 'Z') 
    //         *str += 'a' - 'A';
    //     str++; 
    // }
    // return (st);
}
