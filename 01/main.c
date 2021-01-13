#include <stdio.h>
// void ft_div_mod(int a, int b, int *div, int *mod);
// void ft_putchar(char c);
// void ft_putstr(char *str);
// int ft_strlen(char *str);
// void ft_rev_int_tab(int *tab, int size);
void ft_sort_int_tab(int *tab, int size);

int main(void){
    

    // int a = 100;
    // int b = 50;
    
    // int *div = &a;
    // int *mod = &b;
    // char *str = "12";
    



    // // ft_putstr(str);
    // // ft_strlen(str);
    // ft_rev_int_tab(tab, size);
    // while (i < size){
    //     printf("%d", tab[i]);
    //     i++;
    // }

    // printf("\n");


    // int i = 0;

    // while (i++ < 1){
    //     printf("%d while \n", i);
    // }
    // printf("%d\n", i);

    int size = 10;
    int tab[size];
    // int i = 0;


    tab[0] = 5;
    tab[1] = 9;
    tab[2] = 8;
    tab[3] = 0;
    tab[4] = 1;
    tab[5] = 7;
    tab[6] = 6;
    tab[7] = 4;
    tab[8] = 2;
    tab[9] = 3;
    // tab[10] = 11;
    // tab[11] = 9;
    // tab[12] = 15;
    // tab[13] = 12;
    // tab[13] = 10;
    // tab[14] = 0;


    ft_sort_int_tab(tab, size);
    printf("%d ", tab[0]);
    printf("%d ", tab[1]);
    printf("%d ", tab[2]);
    printf("%d ", tab[3]);
    printf("%d ", tab[4]);
    printf("%d ", tab[5]);
    printf("%d ", tab[6]);
    printf("%d ", tab[7]);
    printf("%d ", tab[8]);
    printf("%d ", tab[9]);
    
    
}