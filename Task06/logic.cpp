bool search_recursion(int* array, int size, int value, int first, int last)
{
	int middle = (first + last) / 2;

	if (array[middle] == value)
	{
		return true;
	}
	else if (array[middle] > value)
	{
		return search_recursion(array, size, value, first, middle - 1);
	}

	return search_recursion(array, size, value, middle + 1, last);
}

bool binary_search(int* array, int size, int value)
{
	if (size <= 0 || array == nullptr)
	{
		return false;
	}

	return search_recursion(array, size, value, 0, size - 1);
}