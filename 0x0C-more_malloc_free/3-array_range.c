#include <stdlib.h>

/**
* array_range - creates an array of integers
*               containing all values between min and max inclusive.
*
* @min: minimum value of the array
* @max: maximum value of the array
*
* Return: pointer to the newly created array
*         NULL if failed
*/
int *array_range(int min, int max)
{
int i, *arr;

if (min > max)
return (NULL);

arr = malloc(sizeof(int) * (max - min + 1));
if (arr == NULL)
return (NULL);

for (i = 0; min <= max; i++, min++)
arr[i] = min;

return (arr);
}
