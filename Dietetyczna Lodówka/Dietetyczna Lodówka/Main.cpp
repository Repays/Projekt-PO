#include "BazaUzytkownikow.h"
#include "Blad.h"
using namespace std;

int main()
{
	BazaUzytkownikow test;

	test.Dodaj();
	test.Dodaj();
	test.Dodaj();

	test.Serializuj();
	test.Wyswietl();



	_getch();
	return 0;
}