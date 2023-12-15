#include "sort.h"
#include <stdlib.h>
#include <stdio.h>
#include <stddef.h>

/**
* swap - to swap
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
* bubble_sort - sorts an array of integers.
* @array: input value
* @size: size of the array
*/

void bubble_sort(int *array, size_t size)
{
size_t i, j;
for (i = 0; i < size - 1; i++)
{
for (j = 0; j < size - i - 1; j++)
{
if (array[j] > array[j + 1])
{
swap(&array[j], &array[j + 1]);
}
}
}
}
