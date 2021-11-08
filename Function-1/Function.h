#pragma once

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

