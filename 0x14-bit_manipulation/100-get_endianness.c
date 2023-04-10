#include "main.h"

/**
* get_endianness - checks the endianness of the system
*
* Return: 1 if little endian, 0 if big endian
*/
int get_endianness(void)
{
unsigned int test_number = 1;
char *byte_pointer = (char *) &test_number;

return (byte_pointer[0]);
}
