#include <iostream>
#include <Windows.h>

/*void Plus(int *num)
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
}*/

void PushArray(int *&arr, int &size)
{
	size++;
	int* temp = new int[size] {};
	for (int i = 0; i < size - 1; i++)
	{
		temp[i] = arr[i]; 
	}
	temp[size - 1] = 100;

	delete[] arr;
	arr = temp;
}

void PickArray(int *&arr, int &size)
{
	if (arr != nullptr)
	{
		delete[] arr;
	}
	 arr = new int [size];
}
void FillArray(int*& arr, int& size)
{
	for (int i = 0; i < size; i++)
	{
		arr[i] = rand() % 10;
	}
}
void PrintArray(int*& arr, int& size)
{
	for (int i = 0; i < size; i++)
	{
		std::cout << arr[i] << " ";
	}
}
void DeleteArray(int*& arr, int& size)
{
	if (arr == nullptr)
	{
		return;
	}
	delete[] arr;
	arr = nullptr;
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
	/*int a = 5;
	int* ptrA = new int;

	delete ptrA;*/
	/*int size = 0;
	std::cin >> size;

	int* ptr = new int[5];

	delete[] ptr;
	
	ptr = nullptr;*/
	/*int row = 3, col = 4;

	int** arr = new int* [row];
	for (int i = 0; i < row; i++)
	{
		std::cin >> col;
		if (arr[i] != nullptr)
		{
			delete[] arr[1];
		}
		arr[i] = new int[col];
	}

	for (int i = 0; i < row; i++)
	{
		delete[] arr[i];
	}
	delete[] arr;*/
	/*int side = 2, row = 4, col1 = 4, col2 = 3;

	int*** arr = new int** [side];

	for (int i = 0; i < side; i++)
	{
		arr[i] = new int* [row];
	}
	for (int i = 0; i < row; i++)
	{
		arr[0][i] = new int[col1];
	}
	arr[1][0] = new int[2];
	for (int i = 0; i < row; i++)
	{
		arr[1][i] = new int[col2];

	}*/


	int size = 5;
	int* ptr = nullptr;

	

	/*int size = 5;
	int* name = new int[size] {3, 1, 2, 6, 9};

	for (int i = 0; i < size; i++)
	{
		std::cout << name[i] << " ";
	}

	PushArray(name, size);
	std::cout <<  "\n\n ";
	for (int i = 0; i < size; i++)
	{
		std::cout << name[i] << " ";
	}
	delete[] name;*/

	return 0;
}