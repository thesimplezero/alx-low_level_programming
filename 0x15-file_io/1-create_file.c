#include "main.h"

/**
* write_content - writes the content to the file
* @file_descr: file descriptor of the file to write to
* @text_content: the text content to write
* @content_len: the length of the text content
*
* Return: 1 on success, 0 on failure
*/
int write_content(int file_descr, char *text_content, size_t content_len)
{
ssize_t wr_bytes;

wr_bytes = write(file_descr, text_content, content_len);

if (wr_bytes < 0 || wr_bytes != (ssize_t)content_len)
{
return (0);
}

return (1);
}

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
int file_descr;
size_t content_len;

if (!filename)
return (-1);

file_descr = open(filename, O_CREAT | O_WRONLY | O_TRUNC, S_IRUSR | S_IWUSR);
if (file_descr < 0)
return (-1);

if (text_content)
{
for (content_len = 0; text_content[content_len] != '\0'; content_len++)
;

if (!write_content(file_descr, text_content, content_len))
{
close(file_descr);
return (-1);
}
}

if (close(file_descr) < 0)
return (-1);

return (1);
}
