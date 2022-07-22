#include "sort.h"

/**
 * bubble_sort - sorts an array of integers in ascending order
 * uses bubble sort algorithm
 * prints the array after each swap
 *
 * @array: array of integers to be sorted
 * @size: number of integers in an array
 */

void bubble_sort(int *array, size_t size)
{
	size_t i;
	int temp;
	int swaps = -1;	/*swaps counter*/

	/*array doesn't need sorting if size < 2*/
	if (size < 2)
		return;

	/*repeat till swaps counter iz 0*/
	while (swaps)
	{
		swaps = 0;	/*reset counter to zero*/

		for (i = 0; i < size - 1; i++)	/*review array elems*/
		{
			if (array[i] > array[i + 1])
			{
				/* swap elements not in order*/
				temp = array[i];
				array[i] = array[i + 1];
				array[i + 1] = temp;

				swaps++;	/*increament swap counter*/

				print_array(array, size);	/*print array*/
			}
		}
	}
}


