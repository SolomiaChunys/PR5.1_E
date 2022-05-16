#include "Money.h"
#include <iostream>
#include <sstream>

using namespace std;

class Error
{
	string message;
public:
	Error(string message)
		: message(message)
	{}
	string What() { return message; }
};

class E : public exception
{
	string message;
public:
	E(string message)
		: message(message)
	{}
	string What() { return message; }
};


Money::Money()
{
	sethrn500(0);
	sethrn200(0);
	sethrn100(0);
	sethrn50(0);
	sethrn20(0);
	sethrn10(0);
	sethrn5(0);
	sethrn2(0);
	sethrn1(0);
	setkop50(0);
	setkop25(0);
	setkop10(0);
	setkop5(0);
	setkop2(0);
	setkop1(0);
}

Money::Money(int hrn_500, int hrn_200, int hrn_100, int hrn_50,
	int hrn_20, int hrn_10, int hrn_5, int hrn_2, int hrn_1,
	int kop_50, int kop_25, int kop_10, int kop_5, int kop_2, int kop_1)
{
	sethrn500(hrn_500);
	sethrn200(hrn_200);
	sethrn100(hrn_100);
	sethrn50(hrn_50);
	sethrn20(hrn_20);
	sethrn10(hrn_10);
	sethrn5(hrn_5);
	sethrn2(hrn_2);
	sethrn1(hrn_1);
	setkop50(kop_50);
	setkop25(kop_25);
	setkop10(kop_10);
	setkop5(kop_5);
	setkop2(kop_2);
	setkop1(kop_1);
}

Money::Money(Money& t)
{
	hrn500 = t.hrn500;
	hrn200 = t.hrn200;
	hrn100 = t.hrn100;
	hrn50 = t.hrn50;
	hrn20 = t.hrn20;
	hrn10 = t.hrn10;
	hrn5 = t.hrn5;
	hrn2 = t.hrn2;
	hrn1 = t.hrn1;
	kop50 = t.kop50;
	kop25 = t.kop25;
	kop10 = t.kop10;
	kop5 = t.kop5;
	kop2 = t.kop2;
	kop1 = t.kop1;
}

Money::~Money()
{ }

double Money::sum()
{
	return (hrn500 * 500. + hrn200 * 200. + hrn100 * 100. + hrn50 * 50. + hrn20 * 20. + hrn10 * 10. + hrn5 * 5. + hrn2 * 2. + hrn1 * 1. + kop50 * 0.50 + kop25 * 0.25 + kop10 * 0.1 + kop5 * 0.05 + kop2 * 0.02 + kop1 * 0.01);
}

ostream& operator <<(ostream& out, const Money& a)
{
	out << string(a) << endl;
	return out;
}

istream& operator >>(istream& in, Money& a)
{
	cout << "Enter SUM:" << endl;
	cout << endl;
	cout << " 500  -  ";
	in >> a.hrn500;
	try
	{
		if (a.hrn500 < 0)
		{
			throw Error("The value can`t be negative!");
		}
		else
		{
			a.hrn500 = 0;
		}
	}
	catch (Error a)
	{
		cout << a.What() << endl;
	}
	cout << " 200  -  ";
	in >> a.hrn200;
	try
	{
		if (a.hrn200 < 0)
		{
			throw Error("The value can`t be negative!");
		}
		else
		{
			a.hrn200 = 0;
		}
	}
	catch (Error a)
	{
		cout << a.What() << endl;
	}
	cout << " 100  -  ";
	in >> a.hrn100;
	try
	{
		if (a.hrn100 < 0)
		{
			throw Error("The value can`t be negative!");
		}
		else
		{
			a.hrn100 = 0;
		}
	}
	catch (Error a)
	{
		cout << a.What() << endl;
	}
	cout << " 50   -  ";
	in >> a.hrn50;
	try
	{
		if (a.hrn50 < 0)
		{
			throw Error("The value can`t be negative!");
		}
		else
		{
			a.hrn50 = 0;
		}
	}
	catch (Error a)
	{
		cout << a.What() << endl;
	}
	cout << " 20   -  ";
	in >> a.hrn20;
	try
	{
		if (a.hrn20 < 0)
		{
			throw Error("The value can`t be negative!");
		}
		else
		{
			a.hrn20 = 0;
		}
	}
	catch (Error a)
	{
		cout << a.What() << endl;
	}
	cout << " 10   -  ";
	in >> a.hrn10;
	try
	{
		if (a.hrn10 < 0)
		{
			throw Error("The value can`t be negative!");
		}
		else
		{
			a.hrn10 = 0;
		}
	}
	catch (Error a)
	{
		cout << a.What() << endl;
	}
	cout << " 5    -  ";
	in >> a.hrn5;
	try
	{
		if (a.hrn5 < 0)
		{
			throw Error("The value can`t be negative!");
		}
		else
		{
			a.hrn5 = 0;
		}
	}
	catch (Error a)
	{
		cout << a.What() << endl;
	}
	cout << " 2    -  ";
	in >> a.hrn2;
	try
	{
		if (a.hrn2 < 0)
		{
			throw Error("The value can`t be negative!");
		}
		else
		{
			a.hrn2 = 0;
		}
	}
	catch (Error a)
	{
		cout << a.What() << endl;
	}
	cout << " 1    -  ";
	in >> a.hrn1;
	try
	{
		if (a.hrn1 < 0)
		{
			throw Error("The value can`t be negative!");
		}
		else
		{
			a.hrn1 = 0;
		}
	}
	catch (Error a)
	{
		cout << a.What() << endl;
	}
	cout << " 0.50 -  ";
	in >> a.kop50;
	try
	{
		if (a.kop50 < 0)
		{
			throw Error("The value can`t be negative!");
		}
		else
		{
			a.kop50 = 0;
		}
	}
	catch (Error a)
	{
		cout << a.What() << endl;
	}
	cout << " 0.25 -  ";
	in >> a.kop25;
	try
	{
		if (a.kop25 < 0)
		{
			throw Error("The value can`t be negative!");
		}
		else
		{
			a.kop25 = 0;
		}
	}
	catch (Error a)
	{
		cout << a.What() << endl;
	}
	cout << " 0.10 -  ";
	in >> a.kop10;
	try
	{
		if (a.kop10 < 0)
		{
			throw Error("The value can`t be negative!");
		}
		else
		{
			a.kop10 = 0;
		}
	}
	catch (Error a)
	{
		cout << a.What() << endl;
	}
	cout << " 0.05 -  ";
	in >> a.kop5;
	try
	{
		if (a.kop5 < 0)
		{
			throw Error("The value can`t be negative!");
		}
		else
		{
			a.kop5 = 0;
		}
	}
	catch (Error a)
	{
		cout << a.What() << endl;
	}
	cout << " 0.02 -  ";
	in >> a.kop2;
	try
	{
		if (a.kop2 < 0)
		{
			throw Error("The value can`t be negative!");
		}
		else
		{
			a.kop2 = 0;
		}
	}
	catch (Error a)
	{
		cout << a.What() << endl;
	}
	cout << " 0.01 -  ";
	in >> a.kop1;
	try
	{
		if (a.kop1 < 0)
		{
			throw Error("The value can`t be negative!");
		}
		else
		{
			a.kop1 = 0;
		}
	}
	catch (Error a)
	{
		cout << a.What() << endl;
	}
	cout << endl;

	return in;
}

Money::operator string() const
{
	stringstream ss;
	ss << "Sum=" << hrn500 * 500. + hrn200 * 200. + hrn100 * 100. + hrn50 * 50. + hrn20 * 20. + hrn10 * 10. + hrn5 * 5. + hrn2 * 2. + hrn1 * 1. + kop50 * 0.50 + kop25 * 0.25 + kop10 * 0.1 + kop5 * 0.05 + kop2 * 0.02 + kop1 * 0.01 << endl;
	return ss.str();
}

double Division(Money& n, Money& m)
{
	try
	{
		if (m.sum() == 0)
		{
			throw Error("The second sum is zero,and zero can`t be divided)");
		}
	}
	catch (Error a)
	{
		cout << a.What() << endl;
	}
	return n.sum() / m.sum();
}

double FracDivision(Money& n, Money& m)
{
	double N = 0;
	try
	{
		if (N == 0)
		{
			throw Error("The number can`t be zero(");
		}
	}
	catch (Error a)
	{
		cout << a.What() << endl;
	}
	double d = n.sum() + m.sum();
	d /= N;
	return d;
}

bool ComparisionGreat(Money& n, Money& m)
{
	return n.sum() > m.sum();
}
bool ComparisionLess(Money& n, Money& m)
{
	return n.sum() < m.sum();
}
bool ComparisionEqual(Money& n, Money& m)
{
	return n.sum() == m.sum();
}