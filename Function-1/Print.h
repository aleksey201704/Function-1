#pragma once
#include "sdfx.h"
#include "Constant.h"

template <typename T>
void Print(T arr[ROWS][COLS], const unsigned int ROWS, const unsigned int COLS)
{

	for (int i = 0; i < COLS; i++)
	{
		for (int j = 0; j < ROWS; j++)
		{
			cout << arr[i][j] << "  ";
		}
		cout << endl;
	}
}

template <typename T>
void Print(T arr[], const unsigned int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << "\t";
	}
}

template <typename T> void ReversPrint(T arr[], const unsigned int n)
{
	cout << endl;
	for (int i = n - 1; i >= 0; i--)
	{
		cout << arr[i] << "\t";
	}
}