#include "search_algos.h"

/**
 * linear_search - Search for a value in an array using linear search.
 * @array: A pointer to the first element of the array.
 * @size: The number of elements in the array.
 * @value: The value to search for.
 *
 * This function performs a linear search to find the given value in the array.
 *
 * Return: If the value is found, the function returns the index of the
 * value in the array. If the value is not found, it returns -1.
 */
int linear_search(int *array, size_t size, int value)
{
	size_t i = 0;

	/* Check if the input array is NULL */
	if (array == NULL)
		return (-1);

	/* Iterate through the array */
	for (i = 0; i < size; i++)
	{
		/* Print the comparison being made */
		printf("Value checked array[%lu] = [%d]\n", i, array[i]);

		/* If the value is found, return the index */
		if (array[i] == value)
			return (i);
	}
	/* Value not found in the array */
	return (-1);
}
