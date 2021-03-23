#include <fcntl.h>
#include <stdlib.h>
#include <unistd.h>
#include "ft.h"

int BUF_SIZEE = 29999;


// void ft_write_files(int argc, char **file, char *dest_file) {


// char buf[BUF_SIZEE];
// int i, j = 0;
// int fd;
// int fd_dest;
// int res = 0;


//     if (!dest_file)
//         ft_putstr("File name missing.");
//     else {
//         while (i < argc - 1) {
//             if ((fd = open(file[i++], O_RDONLY)) == -1) {
//                 ft_putstr("OPEN(): An file open error occurred. No such file or directory.\n");
//                 exit(1);
//             } else if ((res = read(fd, buf, 1)) == -1) {
//                 ft_putstr("READ(): A file read error has occurred. Check file permissions.\n");
//                 exit(1);
//             } else {
//                 ft_putnbr(res);
//                 if (fd_dest == 0) {
//                     fd_dest = open(dest_file, O_WRONLY | O_TRUNC | O_CREAT);
//                 } else {
//                     fd_dest = open(dest_file, O_WRONLY | O_APPEND | O_CREAT);
//                 }
//                 if (fd_dest == -1) {
//                     ft_putstr(dest_file);
//                     ft_putstr("\n");
//                     ft_putstr("OPEN(): An file open error occurred. No such file or directory.\n");
//                     // exit(1);
//                 } else { 
//                     while (buf[j++] != '\0') {
//                         write(fd_dest, buf[j], 1);
//                     }
//                     j = 0;
//                 }
//             }
//             if (close(fd) == -1)
//                 ft_putstr("CLOSE(): An file stream close error occurred.\n");
//         }
//     }
//     if (close(fd_dest) == -1)
//         ft_putstr("CLOSE(): An file stream close error occurred.\n");
// }