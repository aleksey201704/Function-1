#pragma once

#include "sdfx.h"

template <typename T> void maxValueIn(T arr[], const unsigned int n)
{
	int max = arr[0];
	for (int i = 1; i < n; i++)
	{
		if (max < arr[i])
		{
			max = arr[i];
		}
	}

	cout << endl << "������������ �������� = " << max;
}

template <typename T> void minValueIn(T arr[], const unsigned int n)
{
	int min = arr[0];
	for (int i = 1; i < n; i++)
	{
		if (min > arr[i])
		{
			min = arr[i];
		}
	}

	cout << endl << "����������� �������� = " << min;
}



template <typename T> T Sum(T arr[], const unsigned int n)
{
	T s = T(); // �������� �� ��������� ��������� ����
	for (int i = 0; i < n; i++)
	{
		s = s + arr[i];
	}
	return s;
}

template <typename T> void Avg(T arr[], const unsigned int n)
{
	cout << endl << "������� ����� = " << (double)Sum(arr, n) / n;
}

