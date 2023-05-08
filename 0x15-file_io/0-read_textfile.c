#include "main.h"
#include <stdlib.h>

/**
*read_textfile - reads the text files and also
*prints its contents to the standard output
*@filename: the name of the filethat is to be read
*@letters: the number of characters to be read from the file
*returns: the number of bytes successfully read and written,
*or zero if an error has already occurred or
*will occur
*/
ssize_t read_textfile(const char *filename, size_t letters)
{
char *buf;
ssize_t fd;
ssize_t w;
ssize_t t;

fd = open(filename, O_RDONLY);
if (fd == -1)
return (0);
buf = malloc(sizeof(char) * letters);
t = read(fd, buf, letters);
w = write(STDOUT_FILENO, buf, t);

free(buf);
close(fd);
return (w);
}
