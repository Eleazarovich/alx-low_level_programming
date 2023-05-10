#include "search_algos.h"

/**
 * binary_search - searches for a value in a sorted array of integers using
 *                 the Binary search algorithm
 * @array: is a pointer to the first element of the array to search in
 * @size:  is the number of elements in array
 * @value: s the value to search for
 *
 * Return: the index where value is located
 * if value is not present in array or if array is NULL, return -1
 */
int binary_search(int *array, size_t size, int value)
{
	int left, right, mid, i;

	if (array == NULL)
		return (-1);

	left = 0;
	right = size - 1;

	while (left <= right)
	{
		printf("Searching in array: ");
		for (i = left; i < right; i++)
			printf("%d, ", array[i]);
		printf("%d\n", array[i]);

		mid = (left + (right - left) / 2);

		if (array[mid] == value)
			return (mid);
		else if (array[mid] < value)
			left = mid + 1;
		else
			right = mid - 1;
	}
	return (-1);
}
