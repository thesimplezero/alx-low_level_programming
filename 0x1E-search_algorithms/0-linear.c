#include "search_algos.h"
/**
 * linear_search - Look for value in array using linear search
 * @array: Pointer to first element of array to search in
 * @size: Number of elements in array
 * @value: The value to search for
 *
 * Return: The first index where 'value' is located, or -1 if not found
 */
int linear_search(int *array, size_t size, int value)
{
	size_t i;

	if (array == NULL)
		return (-1);
	for (i = 0; i < size; i++)
	{
		printf("Value checked array[%lu] = [%d]\n", i, array[i]);
		if (array[i] == value)
			return (i);
	}
	return (-1);
}
