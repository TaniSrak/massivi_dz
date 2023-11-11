#include <iostream>
#include <ctime>
#include <cstdlib>
#include <algorithm>

int main() {
	setlocale(LC_ALL, "Russian");
	int sum = 0;
	int counter = 0;
	int n;

	//task 1      %=
	
	const int size1 = 10;
	int arr[size1]{4, 1, 22, 3, 4, 58, 6, 70, 8, 9};

	std::cout << "Среднеее арифметическое всех элементов массива -> ";
	for (int i = 0; i < size1; i++)
	{
		std::cout << arr[i] << " ,";
		sum += arr[i];
	}
	std::cout << '\n';
	sum /= size1;


	std::cout << sum << std::endl;

	for (int i = 0; i < size1; i++)
	{
		if (arr[i] < sum)
			counter++;
	}
	std::cout << "Количество чисел меньше среднего арифметичесого -> " << counter << "\n\n";
	

	//Task 2
	
	int arr1[5][5];
	int arr2[5][5];
	srand(time(NULL));
	for (int i = 0; i < 5; i++)
	{
		for (int j = 0; j < 5; j++)
		{
			arr1[i][j] = rand() % 10;
			std::cout << arr1[i][j] << ", ";
		}
		std::cout << "\b\b \n";
	}
	std::cout << "\n\n";

	for (int i = 0; i < 5; i++)
	{
		for (int j = 0; j < 5; j++)
		{
			arr2[i][j] = rand() % 10;
			std::cout << arr2[i][j] << ", ";
		}
		std::cout << "\b\b \n";
	}
	std::cout << "\n\n";

	for (int i = 0; i < 5; i++)
	{
		for (int j = 0; j < 5; j++)
		{
			std::cout << arr1[i][j] + arr2[i][j] << ", ";
		}
		std::cout << "\b\b \n";
	}
	

	//Task3
	std::cout << "Введите шестизначное число -> ";
	std::cin >> n;
	int arr3[6];
	int a = 100000;



	if (n >= 100000 && n <= 999999)
	{
		for (int i = 0; i < 6; i++)
		{
			arr3[i] = n / a % 10;
			a /= 10;
			std::cout << arr3[i] << ", ";
		}
	}
	else
		std::cout << "Ты ошибся, досвидули";


	return 0;
}
