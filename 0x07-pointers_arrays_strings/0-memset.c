/**
* _memset - fills memory with a constant byte
* @s: pointer to memory area to fill
* @b: byte to fill memory with
* @n: number of bytes to fill
*
* Return: pointer to the memory area s
*/
char *_memset(char *s, char b, unsigned int n)
{
unsigned int i;

/* Loop through the memory area s for n bytes */
for (i = 0; i < n; i++)
{
/* Set each byte to the constant value b */
s[i] = b;
}

/* Return a pointer to the memory area s */
return (s);
}
