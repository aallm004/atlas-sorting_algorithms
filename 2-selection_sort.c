#include "sort.h"
/**
 * selection_sort - sorts array of ints using selection sort
 * 
 * @array: array of number
 * @size: number of numbers
 *  
 * Return:
*/
void selection_sort(int *array, size_t size)
{
	size_t a, b, min;
	int temp;

	if (array == NULL || size < 2)
	return;

	a = 0;
	while (a < size - 1)
	{
		min = a;
	
		for (b = i + 1; b < size; b++)
		{
			if (array[b] < array[min])
			min = b;
		}

		if (min != i)
		{
			temp = array[a];
			array[a] = array[min];
			array[min] = temp;
			print_array(array, size);
		}
		a++
	}
}
