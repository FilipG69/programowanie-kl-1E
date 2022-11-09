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

	std::cout << "Podaj druga liczbe (nie podawaj zera):\n";
	std::cin >> secondNumber;

	//iloraz
	int quotient = 0;

	/*if (secondNumber != 0)
		quotient = firstNumber / secondNumber;
	if (secondNumber != 0)
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
int main()
{
	//task1();
	//task2();
	//task3();
	//task5();
	//task4();
	//task6();
	task7();
}




/* A	b
	T	T
	F	F*/
