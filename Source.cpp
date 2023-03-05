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
		mounths mounth = static_cast<mounths>(num);
		if (num > 12)
		{
			std::cout << "ќшибка! ћес€цев всего 12" << std::endl;
		}
		else
		{
			switch (num)
			{
			case 1: 
				std::cout << "January" << std::endl;
				break;
			case 2: 
				std::cout << "February" << std::endl;
				break;
			case 3: 
				std::cout << "March" << std::endl;
				break;
			case 4: 
				std::cout << "April" << std::endl;
				break;
			case 5: 
				std::cout << "May" << std::endl;
				break;
			case 6: 
				std::cout << "June" << std::endl;
				break;
			case 7: 
				std::cout << "July" << std::endl;
				break;
			case 8: 
				std::cout << "August" << std::endl;
				break;
			case 9: 
				std::cout << "September" << std::endl;
				break;
			case 10: 
				std::cout << "October" << std::endl;
				break;
			case 11: 
				std::cout << "November" << std::endl;
				break;
			case 12: 
				std::cout << "December" << std::endl;
				break;
			}
		}
		std::cout << "¬ведите номер мес€ца" << std::endl;
		std::cin >> num;
	}
	std::cout << "ƒо свидани€!";
}