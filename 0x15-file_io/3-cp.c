#include "main.h"
/**
* error_exit - Print error messages and exit with a specific code.
* @error: The error code.
* @str: The name of the file that caused the error.
* @fd: The file descriptor that caused the error.
*
* This function is designed to handle various error codes (97, 98, 99, 100)
* and print appropriate error messages to the standard error stream.
* After printing an error message, the function calls exit() with the
* provided error code.
*/
void error_exit(int error, char *str, int fd)
{
if (error == 97)
{
dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
exit(error);
}
else if (error == 98)
{
dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", str);
exit(error);
}
else if (error == 99)
{
dprintf(STDERR_FILENO, "Error: Can't write to %s\n", str);
exit(error);
}
else if (error == 100)
{
dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
exit(error);
}
}
/**
* main - Copies the content from one file to another file.
* @argc: The number of arguments passed to the program.
* @argv: An array of pointers to the arguments.
*
* Return: Always 0 on success. On failure, the program will
*         exit with a specific error code.
*
* This function is designed to copy the content from one file
* to another file. The names of the files are provided as
* command-line arguments. The function also handles various
* error scenarios by calling the 'error_exit' function.
*/
int main(int argc, char *argv[])
{
int file_from, file_to, read_status, write_status, close_status;
char buffer[MAXSIZE];
/* Check for correct argument count */
if (argc != 3)
error_exit(97, NULL, 0);
/* Open source file */
file_from = open(argv[1], O_RDONLY);
if (file_from == -1)
error_exit(98, argv[1], 0);
/* Open target file */
file_to = open(argv[2], O_CREAT | O_TRUNC | O_WRONLY, 0664);
if (file_to == -1)
{
close(file_from);
error_exit(99, argv[2], 0);
}
/* Read from source and write to target */
while ((read_status = read(file_from, buffer, MAXSIZE)) > 0)
{
write_status = write(file_to, buffer, read_status);
if (write_status != read_status)
{
close(file_from);
close(file_to);
error_exit(99, argv[2], 0);
}
}
/* Handle read error */
if (read_status == -1)
error_exit(98, argv[1], 0);
/* Close source file */
close_status = close(file_from);
if (close_status == -1)
error_exit(100, NULL, file_from);
/* Close target file */
close_status = close(file_to);
if (close_status == -1)
error_exit(100, NULL, file_to);
return (0);
}
