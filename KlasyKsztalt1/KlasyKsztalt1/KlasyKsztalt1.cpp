// KlasyKsztalt.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>

class Ksztalt1
{
public:
	virtual ~Ksztalt1()
	{ }

	virtual void rysuj1() = 0; // metoda czysto wirtualna
};

class Ksztalt2
{
public:
	virtual ~Ksztalt2()
	{ }

	virtual void rysuj2() // metoda wirtualna
	{
		std::cout << "Zostanie przesloniete przez prostokat i trojkat" << std::endl;
	}
};

class Kolo
	: public Ksztalt1
{
public:
	virtual void rysuj1()
	{
		std::cout << "Rysuje kolo" << std::endl;
	}
};

class Kwadrat
	: public Ksztalt1
{
public:
	virtual void rysuj1()
	{
		std::cout << "Rysuje kwadrat" << std::endl;
	}
};

class Prostokat
	: public Ksztalt2
{
public:
	virtual void rysuj2()
	{
		std::cout << "Rysuje prostokat" << std::endl;
	}
};

class Trojkat
	: public Ksztalt2
{
public:
	virtual void rysuj2()
	{
		std::cout << "Rysuje trojkat" << std::endl;
	}
};

int _tmain(int argc, _TCHAR* argv[])
{
	Ksztalt1 *a = new Kolo, *b = new Kwadrat;
	Ksztalt2 *c = new Prostokat, *d = new Trojkat;

	a->rysuj1();
	b->rysuj1();
	c->rysuj2();
	d->rysuj2();

	delete a;
	delete b;
	delete c;
	delete d;

	system("PAUSE");
	return 0;
}



