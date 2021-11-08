#pragma once
#include "sdfx.h"

template <typename T> void shiftRight(T arr[], const unsigned int n, T Quantity)
{
	
	for (int i = n - Quantity; i < n; i++)
	{
		cout << arr[i] << "\t";
	}

	for (int i = 0; i < n - Quantity; i++)
	{
		cout << arr[i] << "\t";
	}


}

template <typename T> void shiftLeft(T arr[], const unsigned int n, T Quantity)
{
	unsigned int arrL[] = { 0,0,0,0,0 };
	unsigned int i1 = 0;

	for (unsigned int i = Quantity; i < n; i++)
	{
		cout << arr[i] << "\t";
		arrL[i1] = arr[i];
		i1++;
	}

	for (unsigned int i = 0; i < Quantity; i++)
	{
		cout << arr[i] << "\t";
		arrL[i1] = arr[i];
		i1++;
	}

	for (unsigned int i = 0; i < n; i++)
	{
		arr[i] = arrL[i];
	}

}

