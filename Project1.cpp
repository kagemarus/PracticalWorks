int main()
{
	setlocale(LC_ALL, "");
	int a;
	int b;
	std::cout << "Введите число A:";
	std::cin >> a;
	std::cout << "Введите число B:";
	std::cin >> b;
	if (b % a == 0)
	{
		std::cout << "Число " << a << " является делителем числа " << b <<
			std::endl;
	}
	else
	{
		std::cout << "Число " << a << " не является делителем числа " << b <<
			std::endl;
	}
}