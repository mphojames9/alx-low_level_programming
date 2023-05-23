#include "main.h"
#include <stdlib.h>
/**
* text_file_reader - it will read the text to the STDOUT.
*
* @filename: file test being read
* @letters: quantity of text to read
* Return: w- for actual number of text that was read
* when the function fails, 0 will be returned
*/
ssize_t text_file_reader(const char *filename, size_t letters)
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

