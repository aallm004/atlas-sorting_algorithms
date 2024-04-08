#include "sort.h"

/**
 * swap - swap two ints.
 * @a: int to be swapped
 * @b: int to be swapped
 **/

void swap(int *a, int *b)
{
	int tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;

}

/**
 * splits - Splits the array and take last element as pivot
 * @arr: Array
 * @min: first element
 * @last: last element
 * @size: size
 * Return: integer
 **/
int splits(int *arr, int min, int last, size_t size)
{
	int pivot;
	int a = (min);
	int b;

	pivot = arr[last];
	for (b = min; b < last; b++)
	{
		if (arr[b] <= pivot)
		{

			swap(&arr[a], &arr[b]);


			if (a != b)
				print_array(arr, size);

			a++;

		}
	}

	swap(&arr[a], &arr[last]);
	if (a != b)
		print_array(arr, size);

	return (a);
}

/**
 * quick_sort_array - quick_sort_array
 * @arr: arr
 * @min: min
 * @last: last
 * @size: size
 * Return: Nothing
 */
void quick_sort_array(int *arr, int min, int last, size_t size)
{

	int pivot;

	if (min < last)
	{
		pivot = splits(arr, min, last, size);
		quick_sort_array(arr, min, (pivot - 1), size);
		quick_sort_array(arr, (pivot + 1), last, size);
	}
}

/**
 * quick_sort -Sort an array using quick_sort algorithm
 * @array: array
 * @size: size
 **/
void quick_sort(int *array, size_t size)
{
	if (size < 2)
		return;

	quick_sort_array(array, 0, size - 1, size);
}
