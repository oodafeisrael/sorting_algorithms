#include "sort.h"
#include <stdbool.h>

/**
* bubble_sort - Sort an array of integers in ascending order.
* @array: An array of integers to sort.
* @size: The size of the array.
*
* Description: Prints the array after each swap.
*/
void bubble_sort(int *array, size_t size)
{
	size_t i, len = size;
	int temp = 0;
	bool swap_flag = false;

	if (array == NULL || size < 2)
		return;
	while (swap_flag == false)
	{
		swap_flag = true;
		for (i = 0; i < len - 1; i++)
		{
			if (array[i] > array[i + 1])
			{
				temp = array[i];
				array[i] = array[i + 1];
				array[i + 1] = temp;
				print_array(array, size);
				swap_flag = false;
			}
		}
		len--;
	}
}
