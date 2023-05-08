#include "main.h"
/**
* append_text_to_file - a function that appends text at the end
*                       of a file
*
* @filename: file to add data to
* @text_content: text content to add to file
*
* Return: 1 on success, -1 on failure
*/
int append_text_to_file(const char *filename, char *text_content)
{
int file_descr;
ssize_t bytes_wr;
size_t content_len;
if (filename == NULL)
{
return (-1);
}
file_descr = open(filename, O_APPEND | O_WRONLY);
if (file_descr == -1)
{
return (-1);
}
if (text_content == NULL)
{
close(file_descr);
return (1);
}
content_len = 0;
while (text_content[content_len] != '\0')
{
content_len++;
}
bytes_wr = write(file_descr, text_content, content_len);
if (bytes_wr < 0 || (size_t)bytes_wr != content_len)
{
close(file_descr);
return (-1);
}
if (close(file_descr) == -1)
{
return (-1);
}
return (1);
}
