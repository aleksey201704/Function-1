#pragma once
#include "sdfx.h"

template <typename T> void Sort(T arr[], const unsigned int n)
{
	int t = 0;
	for (int i = 1; i < n; i++)
	{
		for (int j = 0; j < n - 1; j++)
		{
			if (arr[j] > arr[j + 1])
			{
				t = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = t;
			}
		}
	}
	cout << endl;
	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << "\t";
	}
}
