#include <iostream>
#include <cmath>
using namespace std;

struct Punkt {
	int x, y;
};

double Check(Punkt, Punkt);

int main()
{
	Punkt A = { -4,5 }; Punkt B = { -2, 4 };

	cout << "Odleglosc miedzy punktami wynosi: " << Check(A, B);
}

double Check(Punkt A2, Punkt B2) {
	
	double X21_ = (B2.x * B2.x) - (2 * B2.x * A2.x) + (A2.x * A2.x);
	double Y21_ = (A2.y * A2.y) - (2 * A2.y * B2.y) + (B2.y * B2.y);

	return sqrt(X21_ + Y21_);
}