#include <iostream>
#include <string.h>
int main()
{
	enum class mounths
	{
		January=1,
		Feruary,
		March,
		April,
		May,
		June,
		July,
		August,
		September,
		October,
		November,
		December
	};
	setlocale(LC_ALL, "Russian");
	int num;
	std::cout << "¬ведите номер мес€ца" << std::endl;
	std::cin >> num;
	while (num != 0)
	{
		if (num > 12 || num < 1)  // ѕровер€ю, лежимт ли значение num в нужном диапазоне 
		{
			std::cout << "ќшибка! ћес€цев всего 12, нумераци€ начинаетс€ с 1. ¬ведите другой номер" << std::endl;
		}
		else
		{
			mounths mounth = static_cast<mounths>(num); // “еперь преобразование в тип mounths выполн€етс€ после проверки num
			switch (mounth)
			{
			case mounths::January:
				std::cout << "January" << std::endl;
				break;
			case mounths::Feruary:
				std::cout << "February" << std::endl;
				break;
			case mounths::March:
				std::cout << "March" << std::endl;
				break;
			case mounths::April:
				std::cout << "April" << std::endl;
				break;
			case mounths::May:
				std::cout << "May" << std::endl;
				break;
			case mounths::June:
				std::cout << "June" << std::endl;
				break;
			case mounths::July:
				std::cout << "July" << std::endl;
				break;
			case mounths::August:
				std::cout << "August" << std::endl;
				break;
			case mounths::September:
				std::cout << "September" << std::endl;
				break;
			case mounths::October:
				std::cout << "October" << std::endl;
				break;
			case mounths::November:
				std::cout << "November" << std::endl;
				break;
			case mounths::December:
				std::cout << "December" << std::endl;
				break;
			}
		}
		std::cout << "¬ведите номер мес€ца" << std::endl;
		std::cin >> num;
	}
	std::cout << "ƒо свидани€!";
}