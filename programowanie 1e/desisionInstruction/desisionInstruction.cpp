#include <iostream>

void task1()
{
	int firstNumber, secondNumber, thirdNumber;

	std::cout << "podaj pierwsza liczbe \n";
	std::cin >> firstNumber;

	std::cout << "podaj druga liczbe (nie podawaj 0) \n";
	std::cin >> secondNumber;

	std::cout << "podaj trzecia liczbe (nie podawaj 0)\n";
	std::cin >> thirdNumber;

	int quotient;
	
	quotient = firstNumber / secondNumber / thirdNumber;
	


	std::cout << "iloraz: " << quotient << "\n";
	if (secondNumber !=0)
		quotient = firstNumber / secondNumber / thirdNumber;
	std::cout << "iloraz " << quotient << "/n";

}


int main()
{
	task1();
}
