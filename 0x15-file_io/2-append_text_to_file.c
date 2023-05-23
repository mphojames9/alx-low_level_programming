#include "main.h"
/**
* append_text_to_file - a text to append at the end of the file
*
* @filename: A pointer name to the appended file
* @text_content: A sring to add at the end of appended file.
*
* Return: if unsuccessful -1. will be returned,
* one will be returned on success
*/
int append_text_to_file(const char *filename, char *text_content)
{
int o, w, len = 0;
if (filename == NULL)
return (-1);
if (text_content != NULL)
{
for (len = 0; text_content[len];)
len++;
}
o = open(filename, O_WRONLY | O_APPEND);
w = write(o, text_content, len);
if (i == -1 || w == -1)
return (-1);
close(o);
return (1);
}

