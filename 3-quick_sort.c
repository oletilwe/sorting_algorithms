#include "sort.h"
#include <stddef.h>
#include <stdlib.h>
#include <stdio.h>

/**
* swap - swap two elements
* @a: input value
* @b: input value
*/

void swap(int *a, int *b)
{
int temp = *a;
*a = *b;
*b = temp;
}

/**
* lomuto_partition - to perform Lomuto partition scheme
* @array: input value
* @low: output value
* @high: output value
* Return: always 0
*/

size_t lomuto_partition(int *array, size_t low, size_t high)
{
size_t j;
int pivot = array[high];
size_t i = low - 1;
for (j = low; j <= high - 1; j++)
{
if (array[j] < pivot)
{
i++;
swap(&array[i], &array[j]);
}
}
swap(&array[i + 1], &array[high]);
return (i + 1);
}

/**
* quick_sort_recursive - to perform Quick Sort on an array
* @array: output value
* @low: input value
* @high: input value
*/

void quick_sort_recursive(int *array, size_t low, size_t high)
{
if (low < high)
{
size_t partition_index = lomuto_partition(array, low, high);
quick_sort_recursive(array, low, partition_index - 1);
quick_sort_recursive(array, partition_index + 1, high);
}
}

/**
* quick_sort - to initiate Quick Sort
* @array: output value
* @size:input value
*/

void quick_sort(int *array, size_t size)
{
if (array == NULL || size <= 1)
{
return;
}
quick_sort_recursive(array, 0, size - 1);
}
