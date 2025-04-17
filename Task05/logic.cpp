//	[The Sum of Absolute Values of Negative Elements]
//	Сумма абсолютных значений отрицательных элементов 
//
//	Задан вектор целочисленных значений. Необходимо разработать 
//	функцию, которая с помощью рекурсивного алгоритма вычисляет 
//	сумму отрицательных элементов массива, взятых по модулю, 
//	т.е. по абсолютному значению.
//
//	Если данные вектора заданы некорректно, то функция должна 
//	возвратить 0.

#include "logic.h"
#include <cmath>

int sum_absolute_values_of_negative_elements(int* array, int size) {
	
	if (size <= 0 || !array)
	{
		return 0;
	}

	if (size == 1)
	{
		return *array < 0 ? abs(*array) : 0;
	}

	int sum = sum_absolute_values_of_negative_elements(array, size - 1);
	sum += array[size - 1] < 0 ? abs(array[size - 1]) : 0;

	return sum;
}