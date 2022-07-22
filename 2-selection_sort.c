#include "sort.h"

/**
 * selection_sort - sorts an array of ints in ascending order
 * prints array after each swap
 *
 * @array: array of ints to be sorted
 * @size: number of ints in an array
 */
void selection_sort(int *array, size_t size)
{
	size_t i, j, j_min;
	int temp;

	/*dont sort if size less than 2*/
	if (size < 2)
		return;

	for (i = 0; i < size; i++)
	{
		j_min = i;

		for (j = i + 1; j < size; j++)
		{
			/*find smallest int in the array*/
			if (array[j] < array[j_min])
				j_min = j;
		}
		/* put smallest value at the beginning of array*/
		if (j_min != i)
		{
			temp = array[i];
			array[i] = array[j_min];
			array[j_min] = temp;

			/*print the array*/
			print_array(array, size);
		}
	}
}
