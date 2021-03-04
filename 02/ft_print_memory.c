#include <stdio.h>

void ft_putchar(char c);
int ft_strlcpy(char *dest, char *src, int size);
void ft_putstr(char *str);


void     dec_to_hex(char ch) {
    int digit = ch + 0;
    char *hex = "0123456789abcdef";
  
    if (digit < 16){
        ft_putchar('0');
        ft_putchar(hex[digit]);
    }
    else {
        ft_putchar(hex[digit / 16]);
        ft_putchar(hex[digit % 16]);
    }
}

 void print_space_and_dots(int size){
    if (size == 0) {
        ft_putchar(':');
    }
    if (!(size % 2)) {
        ft_putchar(' ');
    }
 }


int split_str(char *dest, char *str, int j, int size) {
    int i = 0;
    while (str[j] && i < size) {
        dest[i] = str[j];
        i++;
        j++;
    }
    dest[i] = '\0';
    return (j);
}

void	ft_print_address(int nbr, char *hex)
{
	int		add[9];											
	int 	i;
	int		j;
	int 	base_type;

	i = 0;
	j = 8; 
	base_type = 16;
	if(nbr == 0)
	{
		while(j-- > 0)
			ft_putchar('0');
	}
	else
	{
		while (nbr)
		{
			add[i] = nbr % base_type;
			nbr /= base_type;
			i++;
		}
		j = (8 - i);
		while(j-- > 0)
			ft_putchar('0');
		while (i > 0)
			ft_putchar(hex[add[--i]]);
	}
}



void ft_print_memory(char *str, int size){

    int size_line = 0;
    int i = 0;
    char buf[size];
    int j = 0;
 
    while (str[j]){
        ft_print_address(j, "0123456789abcdef");
        j = split_str(buf, str, j, size);
        while (buf[i]) {
                print_space_and_dots(size_line);
                dec_to_hex(buf[i]);
                size_line++;
            if (size_line == size)
                size_line = 0;
            i++;
        }
        i = 0;
        ft_putchar(' ');
        while (buf[i]) {
            (buf[i] >= 32 && buf[i] <= 126) ? ft_putchar(buf[i]) : ft_putchar('.');
            i++;
        }
        ft_putchar('\n');
        i = 0;
    }
}