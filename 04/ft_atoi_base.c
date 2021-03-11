
#include <stdio.h>

int ft_strlen(char *str){
    int i = 0;

    while (str[i]){
        i++;
    }
    return (i);
}

int ft_strstr(char *str, char to_find) {

    while (*str) {
        if (*str++ == to_find)
            return (1);
    }
    return (0);
}

int ft_strstr_basa(char *str, char to_find) {
    int i = 0;
    while (str[i]) {
        if (str[i] == to_find)
            return (i);
        i++;
    }
    return (0);
}

int ft_base_is_valid(char *base){
    int i = 0;

    while (base[i]){
        if (base[i] < 32 || base[i] > 126 || base[i] == '+' || base[i] == '-')
            return 1;
        if (ft_strstr(&base[i + 1], base[i]) || !base[i + 1])                        // Переделать
            return 1;    
        i++;
    }
    return 0;
}

int		ft_atoi_base(char *str, char *base) {

    int i = 0;
    int start_num = 0;
    int power = 0;
    int result = 0;
    int minus = 1;
    int pow;

    while ((str[i] == ' ') || (str[i] == '\t') || (str[i] == '\n')
		|| (str[i] == '\v') || (str[i] == '\f') || (str[i] == '\r')){
        i++;
    }
    while (str[i] == '-' || str[i] == '+'){
        if (str[i] == '-')
            minus *= -1;
        i++;
    }


    start_num = i;
    while (ft_strstr(base, str[i])){
        i++;
    }
    power = i - start_num - 1;

    if (power > 1) {                                   
        pow = ft_strlen(base);                           
        printf("%d\n", power);
        while (power > 1){                             
            while (power-- > 1)                    
                pow *= ft_strlen(base);                
            result = result + (ft_strstr_basa(base, str[start_num++])) * pow;   
            pow = ft_strlen(base);                                              
            power = i - start_num - 1;                                 
        }
    }
    if (power == 1){    
        result = result + (ft_strstr_basa(base, str[start_num++])) * ft_strlen(base);  
        result += (ft_strstr_basa(base, str[start_num]));                                   
    }
    if (power == 0){
        result = result + ft_strstr_basa(base, str[start_num++]);
    }
    return (result * minus);




}