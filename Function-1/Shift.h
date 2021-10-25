#pragma once
#include "stdfx.h"

void shiftRight(int arr[], const unsigned int n, unsigned int  Quantity)
{
	cout << endl;
	cout << "¬ведите на колчество сдвига ¬право = "; cin >> Quantity;

	for (unsigned int i =  n - Quantity; i < n; i++)
	{
		cout << arr[i] << "\t";
	}

	for (unsigned int i =  0; i < n - Quantity; i++)
	{
		cout << arr[i] << "\t";
	}


}
void shiftRight(double arr[], const unsigned int n, unsigned int  Quantity)
{
	cout << endl;
	cout << "¬ведите на колчество сдвига ¬право = "; cin >> Quantity;

	for (unsigned int i =  n - Quantity; i < n; i++)
	{
		cout << arr[i] << "\t";
	}

	for (unsigned int i =  0; i < n - Quantity; i++)
	{
		cout << arr[i] << "\t";
	}


}

void shiftLeft(int arr[], const unsigned int n, unsigned  int  Quantity)
{
	unsigned int arrL[] = { 0,0,0,0,0 };
	unsigned int i1 = 0;

	cout << endl;
	cout << "¬ведите на колчество сдвига влево = "; cin >> Quantity;

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
void shiftLeft(double arr[], const unsigned int n, unsigned int Quantity)
{
	unsigned int arrL[] = { 0,0,0,0,0 };
	unsigned int i1 = 0;

	cout << endl;
	cout << "¬ведите на колчество сдвига влево = "; cin >> Quantity;

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

