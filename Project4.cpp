#include <iostream>
int main()
{
	setlocale(LC_ALL, "");
	int radius;
	std::cout << "Введите радиус окружности: ";
	std::cin >> radius;
	std::cout << "Диаметр окружности: " << radius * 2 << std::endl;
}