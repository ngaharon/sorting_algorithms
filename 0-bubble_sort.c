#include "sort.h"

/**
 * bubble_sort - function call
 * @a: sort array
 * @b: size array
 *
 * description: functions that sorts an array using bubble sort method
 * Return: 0
 */

/* Function to swap two intergers */
void swap(int *a, int *b) {
	int temp = *a;
	*a = *b;
	*b = temp;
}

void bubble_sort(int *array, size_t size)
{
	unsigned int k, l;

	if (!array)
		return;

	for (k = 0; k < size - 1; k++)
	{
		for (l = 0; l < size - k - 1; l++)
		{
			if (array[l] > array[l + 1])
			{
				swap(&array[l], &array[l + 1]);
				print_array(array, size);
			}
		}
	}
}
