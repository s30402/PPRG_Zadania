#include <iostream>
using namespace std;

int main()
{
	int x;
	cin >> x;

	for (int i = 2; i*i <= x; i++) {
		if (x % i == 0) {
			cout << "Nie jest liczba pierwsza" << endl;
			return 0;
		}
	}

	cout << "Jest liczba pierwsza" << endl;
}

