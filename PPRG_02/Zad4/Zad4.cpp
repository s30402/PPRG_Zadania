#include <iostream>
using namespace std;

int main()
{
	int x;
	cin >> x;

	for (int i = 0; i <= x/2; i++) {
		if (i * i == x) {
			cout << "Dla liczby " << i << endl;
			return 0;
		}
	}

	cout << "Nie jest";
}

