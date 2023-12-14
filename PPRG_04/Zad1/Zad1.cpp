#include <iostream>

using namespace std;

int check(int);

int main()
{
	int n, a,A;

	cout << "Podaj liczbe do sprawdzenia: " << endl;
	cin >> n;

	cout << check(n);
}

int check(int n) {
	
	for (int i = 1; i < n / 2; i++) {
		int w = i;
		int p = i;
		w = w * p;
		w = w * p;

		if (n == w) {
			return 1;
		}
	}
	return 0;
}