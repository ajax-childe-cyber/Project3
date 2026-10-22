#define NOMINMAX
#include <iostream>
#include <Windows.h>
#include <string>
#include <limits>

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
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251); //1251, CP_UTF8
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
	/*	int size = 5;
	int* ptr = nullptr;*/
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
	/*	std::string name = "Hello world";
	std::string one = "\nNew text " + name;
	std::string* ptr = nullptr;
	ptr = new std::string[5];
	delete[] ptr;

	std::string arr[5]{ "Apple", "Garlic", "Ivan", "Farit", "Cola"};

	//auto lol = std::find(arr->begin(), arr->end(), "Ivan");

	//name.erase(1);
	std::cout << name << one;

	std::string text1 = "Text";
	std::string text2 = "Иван";

	for (int i = 0; i < text1.size(); i++)
	{
		if (text1[i] == 'T')
		{

			std::cout << 't';
		}
		else
		{

			std::cout << text1[i];
		}
	}*/
	/*std::string one;
	int num = 0;
		while (true)
	{
		system("cls");
		//std::cin >> one;

		std::getline(std::cin, one);
		std::cout << one << std::endl;

		std::getline(std::cin, one, 'u');
		std::cout << one << std::endl;
		//std::cin >> num;
		//std::cout << num << std::endl;

		//std::cin.ignore(32767, '\n'); //не самый лучший
		//std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

		system("pause");
	}*/

	std::string login = " ", login1;
	std::string password = " ", password1;
	std::string name;


	std::cout << "What do you want to do?\n Login?\n Register?\n ";
	std::getline(std::cin, name);
	while (name == "Login" || name == "Register")
	{ 
		if (name == "Login" && login.size() <= 5 || login.size() >= 15 && password.size() <= 4 || password.size() >= 14)
		{
			while (true)
			{
				system("cls");
				std::cout << "Enter your login: ";
				std::getline(std::cin, login);
				if (login.size() >= 5 && login.size() <= 15)
				{
					std::cout << std::endl;
				}
				else
				{
					while (login.size() <= 5 || login.size() >= 15)
					{
						std::cout << "Login must be between 5 and 15 characters long\n Enter your login: ";
						std::getline(std::cin, login);
					}
				}
				std::cout << "Enter your password: ";
				std::getline(std::cin, password);
				if (password.size() >= 5 && password.size() <= 15)
				{
					std::cout << std::endl;
				}
				else
				{
					while (password.size() <= 4 || password.size() >= 14)
					{
						std::cout << "password must be between 5 and 15 characters long\n Enter your password: ";
						std::getline(std::cin, password);
					}
				}
				break;
			}
			std::cout << "your login: " << login << std::endl << " your password: " << password;
		}
		else if (name == "Register")
		{
			while (true)
			{
				system("cls");
				std::cout << "Enter your login: ";
				std::getline(std::cin, login);
				if (login1 == login)
				{
					std::cout << std::endl;
				}
				else
				{
					while (login1 == login)
					{
						std::cout << "Incorrect login or password\n Enter your login: ";
						std::getline(std::cin, login);
					}
				}
				std::cout << "Enter your password: ";
				std::getline(std::cin, password);
				if (password == password1)
				{
					std::cout << std::endl;
				}
				else
				{
					while (password == password1)
					{
						std::cout << "Incorrect login or password\n Enter your password: ";
						std::getline(std::cin, password);
					}
				}
				break;
			}
			std::cout << "You have successfully logged in";
		}
		else
		{
			while (true)
			{
				std::cout << "Incorrect input\n Login?\n Register?\n ";
				std::getline(std::cin, name);
				if (name != "Login" && name != "Register")
				{
					std::cout << "Incorrect\n";
					system("pause");
				}
				else
				{
					break;
				}
				
			}
			
			

		}
	}


	return 0;
}