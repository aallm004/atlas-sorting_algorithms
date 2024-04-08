#include "sort.h"
/**
 * bubble_sort - function that sorts array of ints
 *
 * @array: array of provided numbers
 * @size: size of array
 *
 * Return: Nothing
*/
void bubble_sort(int *array, size_t size)
{
	size_t a, b;

	if (!array || !size)
		return;

	for (a = 0; a < size - 1; a++)

		for (b = 1; b < size; b++)
		{
			if (array[b - 1] > array[b])
			{
				swap(&array[b - 1], &array[b]);
				print_array(array, size);
			}
		}
}

/**
 * swap - swap two ints
 *
 * @a: pointer to an int
 * @b: pointer to an int
 *
 * Return: Nothing
*/

void swap(int *a, int *b)
{
	int swap;

	swap = *a;
	*a = *b;
	*b = swap;
}
