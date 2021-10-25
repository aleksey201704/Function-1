#pragma once
#include "Constants.h"

void Print(int arr[ROWS][COLS], const unsigned int ROWS, const unsigned int COLS);

void Print(int arr[], const unsigned int n);
void Print(double arr[], const unsigned int n);

void FillRand(int arr[], const unsigned int n, int minRand, int maxRand);
void FillRand(double arr[], const unsigned int n, int minRand, int maxRand);

void ReversPrint(int arr[], const unsigned int n);
void ReversPrint(double arr[], const unsigned int n);

int Sum(int arr[], const unsigned int n);
int Sum(double arr[], const unsigned int n);

void Avg(int arr[], const unsigned int n);
void Avg(double arr[], const unsigned int n);

void minValueIn(int arr[], const unsigned int n);
void minValueIn(double arr[], const unsigned int n);
void maxValueIn(int arr[], const unsigned int n);
void maxValueIn(double arr[], const unsigned int n);

void Sort(int arr[], const unsigned int n);
void Sort(double arr[], const unsigned int n);
void shiftLeft(int arr[], const unsigned int n, unsigned int Quantity);
void shiftLeft(double arr[], const unsigned int n, unsigned int Quantity);
void shiftRight(int arr[], const unsigned int n, unsigned int Quantity);
void shiftRight(double arr[], const unsigned int n, unsigned int Quantity);
