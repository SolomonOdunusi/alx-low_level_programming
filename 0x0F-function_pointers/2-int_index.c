/**
 * int_index - searches for an integer in an array
 * @array: the array to be searched
 * @size: the num of elements in the array
 * @cmp: a pointer to the function to be used to compare values
 * Return: the index of the first element where cmp function does not
 * return 0
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array && cmp && size > 0)
	{
		for (i = 0; i < size; i++)
		{
			if (cmp(array[i]))
			{
				return (i);
			}
		}
	}
		return (-1);
}
