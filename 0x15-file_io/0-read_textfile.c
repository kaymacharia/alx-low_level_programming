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
*authour:Kay Macharia
*/
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t op, rd, wr;
	char *buffer;

	if (filename == NULL)
		return (0);

	buffer = malloc(sizeof(char) * letters);
	if (buffer == NULL)
		return (0);

	op = open(filename, O_RDONLY);
	rd = read(op, buffer, letters);
	wr = write(STDOUT_FILENO, buffer, rd);

	if (op == -1 || rd == -1 || wr == -1 || wr != rd)
	{
		free(buffer);
		return (0);
	}

	free(buffer);
	close(op);

	return (wr);
}
