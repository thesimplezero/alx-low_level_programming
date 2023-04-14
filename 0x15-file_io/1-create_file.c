#include "main.h"

/**
* create_file - a function that creates a file
*
* @filename: the file's name
* @text_content: the text to write into the file
*
* Return: 1 on success OR -1 on failure
*/
int create_file(const char *filename, char *text_content)
{
int file_descriptr;
ssize_t writing_res;
size_t content_len = 0;
char *content_cpy;

if (!filename)
{
exit(EXIT_FAILURE);
}

file_descriptr = open(filename, O_CREAT | O_WRONLY | O_TRUNC, S_IRUSR | S_IWUSR);
if (file_descriptr < 0)
{
exit(EXIT_FAILURE);
}

if (text_content)
{
while (text_content[content_len] != '\0')
{
content_len++;
}

content_cpy = (char *)malloc((content_len + 1) * sizeof(char));
if (!content_cpy)
{
close(file_descriptr);
exit(EXIT_FAILURE);
}

memcpy(content_cpy, text_content, content_len);
content_cpy[content_len] = '\0';

writing_res = write(file_descriptr, content_cpy, content_len);
free(content_cpy);

if (writing_res < 0)
{
close(file_descriptr);
exit(EXIT_FAILURE);
}
}

if (close(file_descriptr) < 0)
{
exit(EXIT_FAILURE);
}
return (1);
}
