#include <iostream>

/*
DRY - don't repeat yourself - nie powtarzaj siê
*/

/*
Napisz funkcjê, któa wczyta dwie liczby i wykona dzielenie na nich
*/
void task1()
{
	int firstNumber, secondNumber;

	std::cout << "Podaj pierwsza liczbe:\n";
	std::cin >> firstNumber;
	                        
		std::cout << "Iloraz: " << quotient << "\n";
	if (secondNumber == 0)
		std::cout << "Dzielenie przez zero!!!!\n";*/

	if (secondNumber != 0)
	{
		quotient = firstNumber / secondNumber;
		std::cout << "Iloraz: " << quotient << "\n";
	}
	else
		if (secondNumber == 0)
		{
			std::cout << "Dzielenie przez zero!!!!\n";
		}
}

void task2()
{
	int numberToCheck;
	std::cout << "Podaj liczbe:\n";
	std::cin >> numberToCheck;

	if (numberToCheck > 0)
		std::cout << "liczba wieksza od zera \n";
	else
		std::cout << "liczba mniejsza od zera \n";
}

void task4()
{
	int number, rest;
	std::cin >> number;

	rest = number % 2;

	if (rest > 0)
		std::cout << "liczba jest nie parzysta";
	else
		std::cout << "liczba jest parzysta\n";




}

void task5()
{
	int side;

	std::cout << "podaj bok kwadratu\n";

	std::cin >> side;

	int area;
	area = side * side;

	std::cout << "pole kwadratu wynosi\n";

	std::cout << area;

	int circut;
	circut = side * 4;

	std::cout << "obwod kwadratu wynosi\n";

	std::cout << circut;

}

void task6()
{
}

void task7()
{
	int firstNumber, secondNumber, thirdNumber;

	std::cout << "podaj pierwsza liczbe \n";
	std::cin >> firstNumber;

	std::cout << "podaj druga liczbe  \n";
	std::cin >> secondNumber;

	std::cout << "podaj trzecia liczbe \n";
	std::cin >> thirdNumber;

	if (firstNumber > secondNumber > thirdNumber);
		std::cout << "najwieksza liczba \n";
		std::cout << firstNumber <<  " > " << secondNumber << " > " << thirdNumber;
	
		
	
	
		
	
}

void task10()
{
	int dayNumber;
	std::cout << "podaj liczbe\n";
	std::cin >> dayNumber;
	switch (dayNumber)
	{
	
	case 1:
		std::cout << "poniedzialek\n";
		break;
	case 2:
		std::cout << "wtorek\n";
		break;
	case 3:
		std::cout << "sroda\n";
		break;
	case 4:
		std::cout << "czwartek\n";
		break;
	case 5:
		std::cout << "piantek\n";
		break;
	case 6:
		std::cout << "sobota\n";
		break;
	case 0:
	case 7:
		std::cout << "niedziela\n";
		break;
	default:
	}



}
void task11()
{
	int temperature;
		std::cout << "podaj temperature\n"




}

int main()
{
	task10();
}




/* A	b
	T	T
	F	F*/
