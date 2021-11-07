#include <iostream>
#include <windows.h>

using  namespace std;
// ЗАполняет случайными числами

const unsigned int ROWS = 4;
const unsigned int COLS = 4;

// Двухмерный массив
template <typename T> // Шаблоного типа
void Print(T arr[ROWS][COLS], const unsigned int ROWS, const unsigned int COLS);

template <typename T> // Шаблоного типа
void Print(T arr[], const unsigned int n);

void FillRand(int arr[], const unsigned int n, int minRand, int maxRand);
void FillRand(double arr[], const unsigned int n, int minRand, int maxRand);

template <typename T> // Шаблоного типа
void ReversPrint(T arr[], const unsigned int n);


template <typename T>T  Sum(T arr[], const unsigned int n);


template <typename T> // Шаблоного типа
void Avg(T arr[], const unsigned int n);

template <typename T>
void minValueIn(T arr[], const unsigned int n);

template <typename T>
void maxValueIn(T arr[], const unsigned int n);

template <typename T> 
void Sort(T arr[], const unsigned int n);

template <typename T>
void shiftLeft(T arr[], const unsigned int n, T Quantity);

template <typename T>
void shiftRight(T arr[], const unsigned int n, T Quantity);



void  main()
{
	setlocale(LC_ALL, "Russian");
	const unsigned int n = 5;
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
void shiftRight(T arr[], const unsigned int n, T Quantity)
{
	cout << endl;
	cout << "Введите на колчество сдвига Вправо = "; cin >> Quantity;

	for (int i = n - Quantity; i < n; i++)
	{
		cout << arr[i] << "\t";
	}

	for (int i = 0; i < n - Quantity; i++)
	{
		cout << arr[i] << "\t";
	}


}

template <typename T>
void shiftLeft(T arr[], const unsigned int n, T Quantity)
{
	unsigned int arrL[] = {0,0,0,0,0};
	unsigned int i1 = 0;
			
	cout << endl;
	cout << "Введите на колчество сдвига влево = "; cin >> Quantity;
	
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

template <typename T>
void Sort(T arr[], const unsigned int n)
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

template <typename T>
void maxValueIn(T arr[], const unsigned int n)
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

template <typename T>
void minValueIn(T arr[], const unsigned int n)
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

template <typename T>
void Print(T arr[], const unsigned int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << "\t";
	}
}

template <typename T>
void ReversPrint(T arr[], const unsigned int n)
{
	cout << endl;
	for (int i = n - 1; i >= 0; i--)
	{
		cout << arr[i] << "\t";
	}
}

template <typename T> T Sum(T arr[], const unsigned int n)
{
	T s = T(); // значение по умолчанию шаблоного типа
	for (int i = 0; i < n; i++)
	{
		s = s + arr[i];
	}
	return s;
}

template <typename T> void Avg(T arr[], const unsigned int n)
{
	cout << endl << "Среднне число = " << (double)Sum(arr, n) / n;
}


