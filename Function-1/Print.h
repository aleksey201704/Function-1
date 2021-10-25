#pragma once
#include "stdfx.h"
#include "Constants.h"

void Print(int arr[ROWS][COLS], const unsigned int ROWS, const unsigned int COLS)
{

	for (unsigned int i = 0; i < COLS; i++)
	{
		for (unsigned  int j = 0; j < ROWS; j++)
		{
			cout << arr[i][j] << "  ";
		}
		cout << endl;
	}
}

void Print(int arr[], const unsigned int n)
{
	for (unsigned int i = 0; i < n; i++)
	{
		cout << arr[i] << "\t";
	}
}
void Print(double arr[], const unsigned int n)
{
	for (unsigned int i = 0; i < n; i++)
	{
		cout << arr[i] << "\t";
	}
}

void ReversPrint(int arr[], const unsigned int n)
{
	cout << endl;
	for (int i = n - 1; i >= 0; i--)
	{
		cout << arr[i] << "\t";
	}
}
void ReversPrint(double arr[], const unsigned int n)
{
	cout << endl;
	for (int i = n - 1; i >= 0; i--)
	{
		cout << arr[i] << "\t";
	}
}