#include <stdio.h>

void ft_rev_int_tab(int *tab, int size){
    
    int i;
    int j = 0;
    int tmp;
    
    i = size / 2;
    while (i-- > 0){
        tmp = tab[j];
        tab[j] = tab[size - 1];
        tab[size - 1] = tmp; 
        j++;
        size--;
    }
}