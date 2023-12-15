#include "sort.h"
#include <stdlib.h>
#include <stdio.h>
#include <stddef.h>

/**
* swap - Function to swap two elements in an array
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
* selection_sort - to perform selection sorting
* @array: input value
* @size: size of array
*/

void selection_sort(int *array, size_t size)
{
size_t i, j, min_index;
if (array == NULL || size <= 1)
{
return;
}
for (i = 0; i < size - 1; i++)
{
min_index = i;
for (j = i + 1; j < size; j++)
{
if (array[j] < array[min_index])
{
min_index = j;
}
}
if (min_index != i)
{
swap(&array[i], &array[min_index]);
}
}
}
