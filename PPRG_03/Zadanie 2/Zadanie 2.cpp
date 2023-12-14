#include <iostream>
#include <string>

using namespace std;

int main()
{
	string Password = "s30402!";
	string guess;
	bool answer = false;

	while (!answer) {
		cout << "Zgadnij haslo!" << endl;
		cin >> guess;

		answer = !Password.compare(guess);
	}
}

