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
int file_desc;
ssize_t rd_byte, written_byte;
char *buf;

if (filename == NULL)
{
perror("Error: NULL filename");
exit(EXIT_FAILURE);
}

file_desc = open(filename, O_RDONLY);
if (file_desc == -1)
{
perror("Error opening file");
exit(EXIT_FAILURE);
}

buf = malloc((letters + 1) * sizeof(char));
if (buf == NULL)
{
perror("Error allocating memory");
close(file_desc);
exit(EXIT_FAILURE);
}

rd_byte = read(file_desc, buf, letters);
if (rd_byte == -1)
{
perror("Error reading from file");
free(buf);
close(file_desc);
exit(EXIT_FAILURE);
}

buf[rd_byte] = '\0';

written_byte = write(STDOUT_FILENO, buf, rd_byte);
if (written_byte == -1 || written_byte != rd_byte)
{
perror("Error writing to output");
free(buf);
close(file_desc);
exit(EXIT_FAILURE);
}

free(buf);
close(file_desc);

return (rd_byte);
}
