#include <iostream>
using namespace std;

int main()
{
	int n;
	cin >> n;

	int a = 0; int b = 1;

	for (int i = 0; i < n; i++) {
		
		if (i == n - 1) { cout << b << endl; }

		b = b + a;
		a = b - a;
	}
}

