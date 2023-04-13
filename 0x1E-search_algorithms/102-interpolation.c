#include "search_algos.h"

/**
 * interpolation_search - searches for a value in an array of
 * integers using the Interpolation search algorithm
 *
 * @array: input array
 * @size: size of the array
 * @value: value to search in
 * Return: index of the number
 */
int interpolation_search(int *array, size_t size, int value)
{
	size_t mid, low, high;
	double f;

	if (array == NULL)
		return (-1);

	low = 0;
	high = size - 1;

	while (size)
	{
		f = (double)(high - low) / (array[high] - array[low]) * (value - array[low]);
		mid = (size_t)(low + f);
		printf("Value checked array[%d]", (int)mid);

		if (mid >= size)
		{
			printf(" is out of range\n");
			break;
		}
		else
		{
			printf(" = [%d]\n", array[mid]);
		}

		if (array[mid] == value)
			return ((int)mid);

		if (array[mid] < value)
			low = mid + 1;
		else
			high = mid - 1;

		if (low == high)
			break;
	}

	return (-1);
}
