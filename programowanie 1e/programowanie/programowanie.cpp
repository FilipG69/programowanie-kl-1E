// programowanie.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
// FirstProject.cpp : This file contains the 'main' function.
//  Program execution begins and ends there.


#include <iostream>

int main()
{
    /*
    Instrukcja do wy�wietlania informacji na standardowy strumie� wyj�cia.
    Domy�lnie, jesli nie zosta�o to zmienione, jest to konsola w kt�rej aplikacja
    zosta�a uruchomiona.
    Aby wyswietli� na konsoli nalezy u�y� std::cout.
    Na konosle wywy�amy za pomoca operatora <<.
    Po nim musi znajdowa� si� dana do wys�ania.
    Instrukcj� ko�czymy znakiem �rednik.

    "Hello World!\n" - jest to sta�a o warto�ci tekstowej.
    Sta�e tekstowe s� ograniczone znakami cudzys�owu.
    * ' (apostrof) - jesli jest jeden znak
    * " (cudzys��w) - jesli jest zero lub wi�cej znak�w

    W sta�ych tekstowych moga by� wstawiane znaki specjalne. Takie znaki
    zaczynaj� si� od znaku \ (backslash) po kt�rym mo�e si� znajdowa�:
    * jedna litera alfabetu angielskiego
    * trzy cyfry daj�ce liczb� �semkow�
    Przyk�adowo:
    * \n - symbol oznaczaj�cy now� lini�.
    * \t - symbol oznaczaj�cy znak tabulatora
    * \\ - symbol oznaczaj�cy znak \
    * \' - symbol oznaczaj�cy znak '
    * \" - symbol oznaczaj�cy znak "
    * \141 - symbol �semkowy oznaczajacy zgodnie z tablic� kod�w ASCII znak m�aej literki a
    */

    //github.com/IronLittleFox

    std::cout << "Hel\nlo World!\n";
    std::cout << "Hello World!\n";

    std::cout << "Predkosc to km\\h";

    std::cout << "Tabulator\ttabulator";
    std::cout << 125.5 << " to jest kasztan  " << 16 << "\n";
}
