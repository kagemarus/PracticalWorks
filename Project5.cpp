#include <iostream>
int main()
{
	setlocale(LC_ALL, "");
	double meters;
	std::cout << "Введите расстояние в метрах: ";
	std::cin >> meters;
	std::cout << "Distance in centimeters: " << meters * 100 << std::endl;
}