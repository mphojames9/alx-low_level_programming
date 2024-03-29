#include "main.h"
/**
* create_file - file creation
*
* @filename: file's name pointer
* @text_content: strinf pointer to write  from the file create
*
* Return: if no success, -1 will be returned,
* and on success 1 will be retured
*/
int create_file(const char *filename, char *text_content)
{
int fd, w, len = 0;
if (filename == NULL)
return (-1);
if (text_content != NULL)
{
for (len = 0; text_content[len];)
len++;
}
fd = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
w = write(fd, text_content, len);
if (fd == -1 || w == -1)
return (-1);
close(fd);
return (1);
}
