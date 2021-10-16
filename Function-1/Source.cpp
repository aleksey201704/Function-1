#include <iostream>
#include <windows.h>

using  namespace std;
// ЗАполняет случайными числами

void FillRand(int arr[], const unsigned int n, int minRand, int maxRand);
void FillRand(double arr[], const unsigned int n, int minRand, int maxRand);

const unsigned int ROWS = 4;
const unsigned int COLS = 4;

void Print(int arr[], const unsigned int n);
void Print(double arr[], const unsigned int n);
void Print(int arr[ROWS][COLS], const unsigned int ROWS, const unsigned int COLS);

void ReversPrint(int arr[], const unsigned int n);
int Sum(int arr[], const unsigned int n);
void Avg(int arr[], const unsigned int n);
void minValueIn(int arr[], const unsigned int n);
void maxValueIn(int arr[], const unsigned int n);
void Sort(int arr[], const unsigned int n);
void shiftLeft(int arr[], const unsigned int n, int Quantity);



void  main()
{
	setlocale(LC_ALL, "Russian");
	const unsigned int n = 5;
	int arr[n];
	int Quantity = 0;
	int minRand;
	int maxRand;

	cin >> minRand;
	cin >> maxRand;

	FillRand(arr, n, minRand, maxRand);
	Print(arr, n);

	cout << endl;

	double brr[n];
	FillRand(brr, n, minRand, maxRand);
	Print(brr, n);



	int i_arr_2[ROWS][COLS] =
	{
		{1,2,3,5},
		{4,2,3,5},
		{1,2,3,5}

	};
	cout << endl;
	Print(i_arr_2, ROWS, COLS);

	/*ReversPrint(arr, n);
	cout << endl << " Сумма = " << Sum(arr, n);
	Avg(arr, n);
	minValueIn(arr, n);
	maxValueIn(arr, n);
	Sort(arr, n);
	shiftLeft(arr, n, Quantity);*/


}

void shiftLeft(int arr[], const unsigned int n, int Quantity)
{
	cout << endl;
	cout << "Введите на колчество сдвига влево = "; cin >> Quantity;
	//int arrLeft[5];
	int arrSort[5];
	int k = Quantity - 1;
	for (int i = 0; i < Quantity - 1; i++)
	{
		arrSort[i] = arr[k];
		k;
	}

	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << "\t";
	}
}

void Sort(int arr[], const unsigned int n)
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

void maxValueIn(int arr[], const unsigned int n)
{
	int max = arr[0];
	for (int i = 1; i < n; i++)
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
	int min = arr[0];
	for (int i = 1; i < n; i++)
	{
		if (min > arr[i])
		{
			min = arr[i];
		}
	}

	cout << endl << "Минимальное значение = " << min;
}

void FillRand(int arr[], const unsigned int n, int minRand, int maxRand)
{
	for (int i = 0; i < n; i++)
	{
		arr[i] = rand() % (maxRand - minRand) + minRand;
	}
}
void FillRand(double arr[], const unsigned int n, int minRand, int maxRand)
{

	minRand *= 100;
	maxRand *= 100;

	for (int i = 0; i < n; i++)
	{

		arr[i] = rand() % (maxRand - minRand) + minRand;

		arr[i] /= 100;
	}
}

void Print(int arr[], const unsigned int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << "\t";
	}
}
void Print(double arr[], const unsigned int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << "\t";
	}
}

void Print(int arr[ROWS][COLS], const unsigned int ROWS, const unsigned int COLS)
{

	for (int i = 0; i < COLS; i++)
	{
		for (int j = 0; j < ROWS; j++)
		{
			cout << arr[i][j] << "\t";
		}
		cout << endl;
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

int Sum(int arr[], const unsigned int n)
{
	int s = 0;
	for (int i = 0; i < n; i++)
	{
		s = s + arr[i];
	}
	return s;
}

void Avg(int arr[], const unsigned int n)
{
	cout << endl << "Среднне число = " << (double)Sum(arr, n) / n;
}

