#include <stdio.h>
#include <stdlib.h>


// char *ft_strdup(char *src);

// int	*ft_range(int min, int max);
// int ft_ultimate_range(int **range, int min, int max);
char	*ft_strjoin(int size, char **strs, char *sep);
// void ft_printarr(int *arr);


int main(int argc, char **argv)
{
    // printf("HERE");
    char	*str = NULL;
    // printf("HERE");
	
	if (argc > 2)				/* Если в аргументов рядом с именем программы больше чем 1 то запускаем код ниже */ 
	{
		str = ft_strjoin(argc - 1, argv + 1, ".:.");/* Запускам функцию 'ft_strjoin' с аргументами, которые приняла программа при запуске
								** для склеивания всех строк в одну с помощью строки "HI" (адрес строки с именем программы мы пропускаем) 
								** и сохраняем адрес этой созданной строки в указатель 'str' */
        printf("%s", str);	/* Печатаем символ переноса строки для корректности отображения */
		free(str);
	}
}
