//Triangle.cpp
#include "Triangle.h"

Triangle::Triangle(const double A, const double B, const double C)
{

	if (A + B > C && B + C > A && A + C > B)
	{
		SetA(A);
		SetB(B);
		SetC(C);
	}
	else
	{
		SetA(0);
		SetB(0);
		SetC(0);
	}
}

Triangle::Triangle(const Triangle& v)
{
	double a = v.GetA();
	double b = v.GetB();
	double c = v.GetC();
}

Triangle::~Triangle()
{}

Triangle& Triangle::operator = (const Triangle& n)
{
	double a = n.GetA();
	double b = n.GetB();
	double c = n.GetC();
	return *this;
}

Triangle::operator string () const
{
	stringstream ss;
	ss << endl;
	ss << "a = " << GetA() << endl;
	ss << "b = " << GetB() << endl;
	ss << "c = " << GetC() << endl;
	return ss.str();
}

ostream& operator <<(ostream& out, const Triangle& s)
{
	out << (string)s;
	return out;
}

istream& operator >>(istream& in, Triangle& s)
{
	double a, b, c;
	cout << "a = "; in >> a;
	cout << "b = "; in >> b;
	cout << "c = "; in >> c;
	if (a + b > c && b + c > a && a + c > b)
	{
		s.SetA(a);
		s.SetB(b);
		s.SetC(c);
	}
	else
	{
		s.SetA(0);
		s.SetB(0);
		s.SetC(0);
	}
	return in;
}

double Triangle::Square() const
{
	double a = GetA();
	double b = GetB();
	double c = GetC();
	double S = 0;

	if (a == 0 || b == 0 || c == 0)
	{
		cout << "Square of triangle doesn't exists" << endl;
	}
	else
	{
		double p = (a + b + c) / 2;
		S = sqrt(p * (p - a) * (p - b) * (p - c));
	}
	return S;
}

void Triangle::Angle(double& A, double& B, double& C) const
{
	const double PI = atan(1) * 4;
	double a = GetA();
	double b = GetB();
	double c = GetC();

	double S = Square();

	if (a == 0 || b == 0 || c == 0)
	{
		cout << "Triangle doesn't exists" << endl;
	}
	else
	{
		double sinA = (S * 2) / (a * b);
		double x1 = asin(sinA);
		A = (x1 * 180) / PI;

		double sinB = (sinA * b) / c;
		double x2 = asin(sinB);
		B = (x2 * 180) / PI;

		C = 180 - (A + B);
	}
}