#pragma once
#include "stdfx.h"

void maxValueIn(int arr[], const unsigned int n)
{
	unsigned int  max = arr[0];
	for (unsigned int i = 1; i < n; i++)
	{
		if (max < arr[i])
		{
			max = arr[i];
		}
	}

	cout << endl << "Максимальное значение = " << max;
}
void maxValueIn(double arr[], const unsigned int n)
{
	unsigned int  max = arr[0];
	for (unsigned int i = 1; i < n; i++)
	{
		if (max < arr[i])
		{
			max = arr[i];
		}
	}

	cout << endl << "Максимальное значение = " << max;
}

void minValueIn(int arr[], const unsigned int n)
{
	unsigned int  min = arr[0];
	for (unsigned int i = 1; i < n; i++)
	{
		if (min > arr[i])
		{
			min = arr[i];
		}
	}

	cout << endl << "Минимальное значение = " << min;
}
void minValueIn(double arr[], const unsigned int n)
{
	unsigned int  min = arr[0];
	for (unsigned int i = 1; i < n; i++)
	{
		if (min > arr[i])
		{
			min = arr[i];
		}
	}

	cout << endl << "Минимальное значение = " << min;
}

int Sum(int arr[], const unsigned int n)
{
	unsigned int s = 0;
	for (unsigned int i = 0; i < n; i++)
	{
		s = s + arr[i];
	}
	return s;
}
int Sum(double arr[], const unsigned int  n)
{
	unsigned int s = 0;
	for (unsigned int i = 0; i < n; i++)
	{
		s = s + arr[i];
	}
	return s;
}

void Avg(int arr[], const unsigned int n)
{
	cout << endl << "Среднне число = " << (double)Sum(arr, n) / n;
}
void Avg(double arr[], const unsigned int n)
{
	cout << endl << "Среднне число = " << (double)Sum(arr, n) / n;
}
