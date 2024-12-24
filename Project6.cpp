#include <iostream>
int main()
{
	setlocale(LC_ALL, "");
	double kilometers, meters;
	std::cout << "Введите расстояние в километрах: ";
	std::cin >> kilometers;
	std::cout << "Введите расстояние в метрах: ";
	std::cin >> meters;
	if (kilometers * 1000 < meters)
		std::cout << "Наименьшее расстояние: " << kilometers * 1000 << " метров" <<
		std::endl;
	else
		std::cout << "Наименьшее расстояние: " << meters << " метров" << std::endl;
}