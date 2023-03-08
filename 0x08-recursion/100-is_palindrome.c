#include "main.h"

int check_palindrome(char *s, int i, int len);
int get_string_length(char *s);

/**
 * is_palindrome - checks if a string is a palindrome
 * @s: string to check
 *
 * Return: 1 if it is, 0 if not
 */
int is_palindrome(char *s)
{
    if (*s == '\0')
        return (1);
    return (check_palindrome(s, 0, get_string_length(s)));
}

/**
 * get_string_length - returns the length of a string
 * @s: string to get the length of
 *
 * Return: length of the string
 */
int get_string_length(char *s)
{
    if (*s == '\0')
        return (0);
    return (1 + get_string_length(s + 1));
}

/**
 * check_palindrome - checks if a string is a palindrome recursively
 * @s: string to check
 * @i: starting index
 * @len: ending index
 *
 * Return: 1 if palindrome, 0 if not
 */
int check_palindrome(char *s, int i, int len)
{
    if (*(s + i) != *(s + len - 1))
        return (0);
    if (i >= len)
        return (1);
    return (check_palindrome(s, i + 1, len - 1));
}
