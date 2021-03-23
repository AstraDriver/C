#include <fcntl.h>
#include <stdlib.h>
#include <unistd.h>
#include "ft.h"

int BUF_SIZE = 29999;

void ft_display_file(int argc, char *file) {

char buf[BUF_SIZE];
int fd;
    if (argc == 1)
        ft_putstr("File name missing.");
    else {
        if ((fd = open(file, O_RDONLY)) == -1) {
            ft_putstr("OPEN(): An file open error occurred. No such file or directory.\n");
            exit(1);
        } else if (read(fd, buf, BUF_SIZE) == -1) {
            ft_putstr("READ(): A file read error has occurred. Check file permissions.\n");
            exit(1);
        } else
            ft_putstr(buf);
    }
    if (close(fd) == -1)
        ft_putstr("CLOSE(): An file stream close error occurred.\n");
}