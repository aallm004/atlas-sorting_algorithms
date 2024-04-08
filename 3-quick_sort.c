#include "sort.h"

/**
 * particion - particion
 * @array: given array
 * @lo: lower
 * @hi: higher
 * @size: array's size
 * Return: a
 */
int particion(int *array, int lo, int hi, size_t size)
{
    if (lo < hi)
    {
        int a, b;
        int pivot = array[hi], aux = 0;

		a = lo - 1;
		b = lo;
        for (; b < hi; b++)
        {
            if (array[b] <= pivot)
            {
                a++;
                if (array[a] != array[b])
                {
                    aux = array[a];
                    array[a] = array[b];
                    array[b] = aux;
                    print_array(array, size);
                }
            }
        }
        if (array[a + 1] != array[hi])
        {
            aux = array[a + 1];
            array[a + 1] = array[hi];
            array[hi] = aux;
            print_array(array, size);
        }
        return (a + 1);
    }
    return -1;
}


/**
 * quick_sort - sorts an array of integers using quick sort
 *
 * @array: given array
 * @size: given size of array
 *
 * Return: void
 */
void quick_sort(int *array, size_t size)
{
	if (array == NULL || size < 2)
		return;

	quick_so(array, 0, size - 1, size);
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
