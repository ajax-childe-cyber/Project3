#include <iostream>
#include <Windows.h>

void Plus(int *num)
{
	*num += 2;
}
int Plus(int num)
{
	return num += 2;
}

void FillArray(int *arr, int size)
{

	for (int i = 0; i < size; i++)
	{
		*(arr + i) = rand() % 10 + 1;
		std::cout << *(arr + i) << " ";
	}
	std::cout << "\n";
}

void MySwap(int *one, int *two)
{
	int num = *one;
	*one = *two;
	* two = num;
}

void MySwap(int &one, int &two)
{
	int num = one;
	one = two;
	two = num;
}


int main()
{
	SetConsoleCP(CP_UTF8);
	SetConsoleOutputCP(CP_UTF8);
	srand(time(NULL));
	/*int b = 10;
	int a = 5;
	Plus(&a);
	int* ptr = nullptr;
	b = Plus(a);

	ptr = &a;
	std::cout << a << "\n" << &a << "\n" << ptr << "\n" << &ptr << "\n";
	ptr = &b;
	ptr = nullptr;*/
	/*
		int one = 10, two = 15;

		std::cout << one << " " << two << "\n";
		//std::swap(one, two);
		MySwap(one, two);

		std::cout << one << " " << two << "\n";*/
	/*const int size = 5;
	int arr[size]{ 1, 2 , 3, 4, 5 };
	std::cout << arr << "\n";
	std::cout << *arr << "\n";
	std::cout << arr + 1 << "\n";
	std::cout << *(arr + 1) << "\n";
	int arr1[size]{};
	FillArray(arr1, size);*/


	int a = 5;
	int* ptrA = new int;

	delete ptrA;



	return 0;
}