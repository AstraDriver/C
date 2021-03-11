#include <stdio.h>
int ft_strcmp(char *s1, char *s2) {

    while (*s1 && *s1++ == *s2++) {
        // *s1++;
        // *s2++;
    }
    return (*s1 - *s2);
}
void	ft_swap(char *a, char *b)
{
	char	temp;

	temp = *a;
	*a = *b;
	*b = temp;
}



int main(int argc, char **argv) {
    int i = 0;
    while (argv[i + 1]) {
        if (ft_strcmp(argv[i], argv[i + 1]) < 0) {
            ft_swap(argv[i], argv[i + 1]);
        }
        i++;
    }
    printf("%s\n%s", argv[0], argv[1]);
}


