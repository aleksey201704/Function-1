#pragma once
#include "stdfx.h"

void Sort(int arr[], const unsigned int n)
{
	unsigned int t = 0;
	for (unsigned int i =  1; i < n; i++)
	{
		for (unsigned int j =  0; j < n - 1; j++)
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
	for (unsigned int i =  0; i < n; i++)
	{
		cout << arr[i] << "\t";
	}
}
void Sort(double arr[], const unsigned int n)
{
	unsigned int t = 0;
	for (unsigned int i =  1; i < n; i++)
	{
		for (unsigned int j =  0; j < n - 1; j++)
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
	for (unsigned int i =  0; i < n; i++)
	{
		cout << arr[i] << "\t";
	}
}

