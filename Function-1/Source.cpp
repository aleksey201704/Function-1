#include "stdfx.h"
#include "Function.h"
#include "FillRand.h"
#include "Print.h"
#include "Shift.h"
#include "Sort.h"
#include "Statistic.h"


void  main()
{
	setlocale(LC_ALL, "Russian");
	int arr[n];
	int Quantity = 0;
	int minRand;
	int maxRand;
	
	double brr[n];

	int i_arr_2[ROWS][COLS] =
	{
		{1,2,3,5},
		{4,2,3,5},
		{1,2,3,5},
		{1,2,3,5}
	};

	cout << "Введите минимамальное = "; cin >> minRand;
	cout << "Введите максимальное = "; cin >> maxRand;

	FillRand(arr, n, minRand, maxRand);
	Print(arr, n);

	cout << endl;
	
	
	FillRand(brr, n, minRand, maxRand);
	
	Print(brr, n);
	cout << endl;
	Print(i_arr_2, ROWS, COLS);

	Print(arr, n);
	ReversPrint(arr, n);
	cout << endl << " Сумма = " << Sum(arr, n);
	Avg(arr, n);
	minValueIn(arr, n);
	maxValueIn(arr, n);
	Sort(arr, n);
	shiftLeft(arr, n, Quantity);
	shiftRight(arr, n, Quantity);


}

