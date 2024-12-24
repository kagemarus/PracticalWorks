#include <iostream>
int main()
{
	setlocale(LC_ALL, "");
	int m, n;
	std::cout << "Введите число m: ";
	std::cin >> m;
	std::cout << "Введите число n: ";
	std::cin >> n;
	if (m > n)
		std::cout << "Number " << m << " > " << n << std::endl;
	else if (m < n)
		std::cout << "Number " << m << " < " << n << std::endl;
	else
		std::cout << "The numbers are equal" << std::endl;
}