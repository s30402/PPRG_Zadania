#include <iostream>

using namespace std;

int main()
{
	int a1, r, n;

	cout << "Wprowadz pierwszy element ciagu arytmetycznego: ";
	cin >> a1;
	cout << "Wprowadz roznice: ";
	cin >> r;
	cout << "Wprowadz ilosc elementow: ";
	cin >> n;

	int an = a1 + (n - 1) * r;
	int Sn = n * ((a1 + an) / 2);

	cout << Sn;
}

