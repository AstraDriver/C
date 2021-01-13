#include <stdio.h>

void ft_sort_int_tab(int *tab, int size){
    int mid = size / 2;
    int left = 1;
    int right = size - 1;
    int pivot = tab[0];
    int tmp;
    int arr_left[size];
    int arr_right[size];



    if (size >= 1) {
        while (left < right) {
            while (tab[left] < pivot)
            {
                left++;
            }
            while (tab[right] >= pivot) 
            {
                right--;
            }
            tmp = tab[left];
            tab[left] = tab[right];
            tab[right] = tmp; 
        }
        
        tmp = pivot;
        pivot = tab[right];
        tab[right] = tmp;
        tmp = 0;
        while (tmp < right)
        {
            
            arr_left[tmp] = tab[tmp];
            tmp++;
        }
        tmp++;
        while (tmp < size)
        {
            arr_right[tmp] = tab[tmp];
            tmp++;
        }
        
        if (left < right) {
            ft_sort_int_tab(arr_left, right); 
            }
        if (right > left) {
        ft_sort_int_tab(arr_right, size - right);
        }
    }

    printf("Here\n");

}