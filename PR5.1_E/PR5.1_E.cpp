#include <iostream>
#include <iomanip>
#include "Money.h"
#include <sstream>

using namespace std;

int main()
{
	Money m(0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
	Money l;

	Division(m, l);
	FracDivision(m, l);

	Money m1(0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
	cin >> m1;
	Money l1;
	cin >> l1;

	Division(m1, l1);
	FracDivision(m1, l1);

	if (ComparisionGreat(m1, l1))
		cout << "FirstSum > SecondSum" << endl;
	if (ComparisionLess(m1, l1))
		cout << "FirstSum < SecondSum" << endl;
	if (ComparisionEqual(m1, l1))
		cout << "FirstSum = SecondSum" << endl;

	cout << "count = " << Money::Count() << endl;
	cout << "count = " << Object::Count() << endl;

	return 0;
}