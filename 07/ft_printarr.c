#include <stdio.h>

void ft_printarr(int *arr) {

    while (*arr) {
       printf("%d ", *arr++); 
    }
}