// lotOfTask.cpp : This file contains the 'main' function. Program execution begins and ends there.
// 
// 
// 
/*
Podstawy programowania:
1. Program obliczaj�cy �redni� arytmetyczn� dw�ch liczb.
2. Program obliczaj�cy pole prostok�ta.
3. Program obliczaj�cy obj�to�� sto�ka.
4. Program obliczaj�cy pole ko�a.
5. Program obliczaj�cy warto�� wyra�enia a^2 + b^2
6. Program obliczaj�cy pole tr�jk�ta o podstawie b i wysoko�ci h
7. Program obliczaj�cy obj�to�� kuli o promieniu r

9. Program obliczaj�cy �redni� wa�on� trzech liczb z podanymi odpowiednimi wagami w1, w2 i w3.
Instrukcja If:
1. Program sprawdzaj�cy czy podana liczba jest parzysta czy nieparzysta
2. Program sprawdzaj�cy czy podana liczba jest dodatnia, ujemna czy r�wna zero
3. Program sprawdzaj�cy czy podany rok jest rokiem przest�pnym
4. Program wy�wietlaj�cy odpowiedni komunikat w zale�no�ci od podanej oceny (np. "bardzo dobry" dla oceny 5, "dobry" dla oceny 4 itd.)
5. Program sprawdzaj�cy czy podane has�o jest poprawne (np. je�li has�o jest "abc123", program powinien wy�wietli� "has�o poprawne", je�li jest inne, powinien wy�wietli� "has�o niepoprawne").
6.Program sprawdzaj�cy czy podana data jest poprawna (np. sprawdzaj�c, czy dzie� jest z zakresu od 1 do 31, miesi�c od 1 do 12 itd.)
7. Program wy�wietlaj�cy odpowiedni komunikat w zale�no�ci od podanej temperatury (np. "ciep�o" dla temperatury powy�ej 20 stopni Celsjusza, "ch�odno" dla temperatury poni�ej 10 stopni Celsjusza itd.)
P�tle:
1. Program sprawdzaj�cy czy podana liczba jest liczb� pierwsz� (czyli tak�, kt�ra dzieli si� tylko przez 1 i przez siebie sam�)
2. Program sprawdzaj�cy czy podany ci�g znak�w jest palindromem (czyli takim, kt�ry czytany od ty�u jest taki sam, jak czytany od przodu, np. "kajak")
3. Program sprawdzaj�cy czy podane dwa s�owa s� anagramami (czyli takimi, kt�re zawieraj� te same litery, ale w innym uk�adzie, np. "klasa" i "salka")
4. Program sprawdzaj�cy czy podana liczba jest liczb� doskona�� (czyli tak�, kt�rej suma dzielnik�w (z wy��czeniem samej siebie) jest r�wna danej liczbie, np. 6 jest liczb� doskona��, poniewa� 1 + 2 + 3 = 6).
P�tla for:
1. Program wy�wietlaj�cy na ekranie kolejne liczby naturalne od 1 do 10
2. Program obliczaj�cy sum� liczb od 1 do 100
3. Program wy�wietlaj�cy na ekranie kwadraty liczb od 1 do 10 (np. 1, 4, 9, 16 itd.)
4. Program wy�wietlaj�cy na ekranie silnie z liczb od 1 do 10 (np. 1!, 2!, 3!, 4! itd.)
5. Program wy�wietlaj�cy na ekranie tabliczk� mno�enia od 1 do 9 (np. 1x1=1, 1x2=2, 1x3=3 itd.).
6. Program wy�wietlaj�cy na ekranie wszystkie liczby podzielne przez 3 z zakresu od 1 do 100
7. Program obliczaj�cy sum� kwadrat�w liczb od 1 do 10
8. Program wy�wietlaj�cy na ekranie ci�g Fibonacciego do 20 elementu (ci�g Fibonacciego to ci�g gdzie ka�dy element jest sum� dw�ch poprzednich, np. 0, 1, 1, 2, 3, 5, 8, 13 itd.)
9. Program wy�wietlaj�cy na ekranie kolejne pot�gi 2 od 2^0 do 2^10 (np. 2^0, 2^1, 2^2 itd.)
10. Program wy�wietlaj�cy na ekranie kolejne elementy ci�gu a_n = a_{n-1} + a_{n-2}, gdzie a_0=1, a_1=1 (ci�g ten zaczyna si� od 1, 1, 2, 3, 5, 8, 13 itd.).
P�tla do-while:
1. Program pytaj�cy u�ytkownika o has�o i wy�wietlaj�cy komunikat "has�o poprawne" lub "has�o niepoprawne" dop�ki u�ytkownik nie poda poprawnego has�a (np. "abc123").
2. Program wy�wietlaj�cy na ekranie kwadraty liczb od 1 do 10 (np. 1, 4, 9, 16 itd.) dop�ki suma tych kwadrat�w nie przekroczy 1000.
Trudniejsze zadania:
1. Program implementuj�cy algorytm szyfrowania Cezara (proste szyfrowanie, w kt�rym ka�dy znak w tek�cie jest zast�powany innym znakiem, przesuni�tym o sta�� liczb� pozycji w alfabecie).
2. Program obliczaj�cy najwi�kszy wsp�lny dzielnik (NWD) dw�ch liczb
3. Program obliczaj�cy najmniejsz� wsp�ln� wielokrotno�� (NWW) dw�ch liczb.
4. Program wyci�gaj�cy informacje z numeru PESEL
5. Napisz program, kt�ry pobiera od u�ytkownika ci�g znak�w i wy�wietla liczb� samog�osek i sp�g�osek w tym ci�gu.
Dla zaawansowanych:
1. Program implementuj�cy algorytm generowania liczb pseudolosowych (np. algorytm Mersenne Twister).
2. Algorytm szyfrowania AtBash Cipher - algorytm szyfruj�cy, w kt�rym ka�da litera jest zamieniana na liter� z przeciwnej strony alfabetu (np. A na Z, B na Y itd.)
3. Algorytm szyfrowania Morse'a - algorytm szyfruj�cy, w kt�rym ka�da litera w tek�cie jest zamieniana na ci�g znak�w "+" i "-", zgodny z kodem Morse'a.
4. Napisz program, kt�ry pobiera od u�ytkownika dwie macierze kwadratowe o takim samym rozmiarze i wy�wietla ich iloczyn.
5. Program kt�ry na wej�ciu przyjmie r�wnanie a na wyj�ciu da r�wnanie w odwrotnej notacji polskiej ONP. Np. na wej�ciu 2+3*4 na wyj�cu da 234*+
6. Program, kt�ry na wej�ciu przyjmie r�wanie w ONP a na wyj�ciu wy�wietli wynik r�wania.
7. Napisz gr� k�ko i krzy�yk.
*/

#define _USE_MATH_DEFINES
#include <iostream>

//

#include <iostream>
void task1()
{
	int numberFromUser;

	std::cout << "podaj liczbe: \n";
	std::cin >> numberFromUser;

	if (numberFromUser % 2 == 0)
	{
		std::cout << "liczba jest parzysta";
	}
	else
		std::cout << " liczba jest nie parzysta";
}

void task2()
{
	int side, side2, sum;

	std::cout << "podaj bok prostok�ta";
	std::cin >> side;
	std::cout << "podaj 2 bok prostok�ta";
	std::cin >> side2;
	std::cout << side * side2 ;
}
void task3()
{
	int numberFromUser;

	std::cout << "podajesz liczbe: \n";
	std::cin >> numberFromUser;

	if (numberFromUser % 4 == 0 && numberFromUser % 100 != 0)
		std::cout << "rok jest przest�pnym uidsgjkdjgugjkdfjkhiuoitgj";
	else
		std::cout << "rok jest normalny ";
}



void task5()
{
	int a, b;
	std::cout << "podaj a";
	std::cin >> a;
	std::cout << "podaj b";
	std::cin >> b;
	std::cout << a * a + b * b;
}
//8. Program obliczaj�cy pole trapezu o podstawach a i b oraz wysoko�ci h
void task8()
{
	int a, b, h;
	std::cout << "podaj ile wynosi a";
	std::cin >> a;
	std::cout << "podaj ile wynosi b";
	std::cin >> b;
	std::cout << "podaj ile wynosi h";
	std::cin >> h;
	std::cout << (a + b) * h / 2;


}

//1. Program obliczaj�cy �redni� arytmetyczn� dw�ch liczb.

void task1()
{
	int firstNumber, secondNumber, mean;

	std::cout << "podaj dwie liczby \n";
	std::cin >> firstNumber;
	std::cin >> secondNumber;

	mean = firstNumber + secondNumber;
	mean = mean / 2;
	std::cout << " srednia wynosi " << mean;

}
//7. Program obliczaj�cy obj�to�� kuli o promieniu 

void task7()
{
	double r, sume;

	std::cout << "podaj r : \n";
	std::cin >> r;

	sume = 4 * M_PI * (r * r);
	std::cout << "pole kuli wynosi:" << sume;
}

//6. Program obliczaj�cy pole tr�jk�ta o podstawie b i wysoko�ci h
void task6()
{
	int number_b, number_h, sume;

	std::cout << "podajesz podstaw�: \n";
	std::cin >> number_b;
	std::cout << "podaj h : \n";
	std::cin >> number_h;

	sume = number_b * number_h / 2;
	std::cout << "pole tr�jk�ta wynosi :" << sume;
}

//8. Program obliczaj�cy pole trapezu o podstawach a i b oraz wysoko�ci h
void podstawy8()
{
	int b, a, h, sume;

	std::cout << "podaj a: \n";
	std::cin >> a;
	std::cout << "podaj b : \n";
	std::cin >> b;
	std::cout << "podaj h";
	std::cin >> h;

	sume = (a + b) * h * 1 / 2;
	std::cout << "pole wynosi :" << sume;
}


int main()
{
	task5();
}
