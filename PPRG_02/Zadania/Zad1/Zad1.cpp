#include <iostream>
using namespace std;

int main()
{
	int x, y;
	bool t=true;
	cin >> x >> y;

	for (int i = x; i <= y; i++) {
		
		int j = 2;
		t = true;

		while(t && j<i) {
			if (i % j == 0) {
				t = false;
			}
			j++;
		}

		if (t) {
			cout << i << endl;
		}
	}
}

