//Triangle.h
#pragma once
#pragma pack(1)
#include "Triad.h"

class Triangle : public Triad
{
public:

	Triangle(const double a = 0, const double b = 0, const double c = 0);
	Triangle(const Triangle& s);
	~Triangle();

	Triangle& operator = (const Triangle& s);
	operator string () const;

	friend ostream& operator << (ostream& out, const Triangle& s);
	friend istream& operator >> (istream& in, Triangle& s);

	double Square() const;
	void Angle(double& A, double& B, double& C) const;
};
