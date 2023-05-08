#include "main.h"
/**
* read_textfile - reads a text file and displays it to POSIX standard output.
*
* @filename: name of the file to read
* @letters: number of characters to read and display from file
*
* Return: 0 if failure or actual count of characters read and displayed
*/
ssize_t read_textfile(const char *filename, size_t letters)
{
int file_descr;
ssize_t rd_bytes, wr_bytes, tmp_wr;
char *buffer;
if (!filename)
{
return (0);
}
file_descr = open(filename, O_RDONLY);
if (file_descr == -1)
{
return (0);
}
buffer = (char *) malloc(letters * sizeof(char));
if (!buffer)
{
close(file_descr);
return (0);
}
rd_bytes = read(file_descr, buffer, letters);
if (rd_bytes == -1)
{
free(buffer);
close(file_descr);
return (0);
}
wr_bytes = 0;
while (wr_bytes < rd_bytes)
{
tmp_wr = write(STDOUT_FILENO, buffer + wr_bytes, rd_bytes - wr_bytes);
if (tmp_wr == -1)
{
free(buffer);
close(file_descr);
return (0);
}
wr_bytes += tmp_wr;
}
free(buffer);
close(file_descr);
return (rd_bytes);
}
