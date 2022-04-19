//Source.cpp
#include "Triangle.h"

Triad ReturnObj(Triad c)
{
	return c;
}

int main()
{
	Triad triad(3, 4, 5);
	cout << "Sum = " << triad.Sum() << endl;

	Triangle M;
	cin >> M;
	cout << M << endl;

	cout << "Return Object" << endl;
	cout << ReturnObj(triad) << endl;

	cout << "Principle of substitution" << endl;
	Triad N = M;
	cout << N << endl;

	double A = 0.0;
	double B = 0.0;
	double C = 0.0;

	Triangle T(3, 4, 5);
	cout << "Square: " << T.Square() << endl;

	Triangle K;
	cin >> K;
	cout << K << endl;

	K.Angle(A, B, C);
	cout << "Angle A = " << A << endl;
	cout << "Angle B = " << B << endl;
	cout << "Angle C = " << C << endl;
}