char *ft_strstr(char *str, char *to_find) {

    int k = 0;
    int i = 0;
    int j = 0;

    
    
    while (str[i]) {
        j = 0;
        while (str[i] == to_find[j])
        {
            if (j == 0) {
                k = i;
            }
            if (to_find[j + 1] == '\0')
            {
                return (&str[k]);
            }
            j++;
            i++;
        }
        i++;
    }
    return (0);

}