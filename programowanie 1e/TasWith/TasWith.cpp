
#include <iostream>
/*napisz funkcje ktora pobierze 2 liczby oraz wykona podstawowoe operacje artmetyczne*/

void task1()
{
	int firstNumber, secondNumber, thirdNumber;

	std::cout << "podaj pierwsza liczbe \n";
	std::cin >> firstNumber;

	std::cout << "podaj druga liczbe (nie podawaj 0) \n";
	std::cin >> secondNumber;

	std::cout << "podaj trzecia liczbe (nie podawaj 0)\n";
	std::cin >> thirdNumber;

	int sum, difference, product, quotient, rest;
	sum = firstNumber + secondNumber + thirdNumber;
	difference = firstNumber - secondNumber - thirdNumber;
	product = firstNumber * secondNumber * thirdNumber;
	quotient = firstNumber / secondNumber / thirdNumber;
	rest = firstNumber % secondNumber % thirdNumber;

	std::cout << "suma: " << sum << "\n";
	std::cout << "roznica: " << difference << "\n";
	std::cout << "iloczyn: " << product << "\n";
	std::cout << "iloraz: " << quotient << "\n";
	std::cout << "reszta " << rest << "\n";

}

int main()
{
	task1();


}
