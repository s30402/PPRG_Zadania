#include <iostream>
#include <string>

using namespace std;

int main()
{
	int player = 0;
	int si=0;

	bool correct = true;

	while (correct) {

		int attack;

		cout << "Papier-Kamien-Nozyce, co wybierasz?" << endl;
		cout << "0 <- Papier" << endl << "1 <- Kamien" << endl << "2 - Nozyce" << endl;
		cin >> attack;

		int range = 2 - 0 + 1;
		int num = rand() % range + 0;

		if (attack == num) { cout << "REMIS! Kolejna runda!"; }
		else if (attack == 0 && num == 1) { cout << "Punkt dla gracza"; player++; }
		else if (attack == 1 && num == 2) { cout << "Punkt dla gracza"; player++; }
		else if (attack == 2 && num == 0) { cout << "Punkt dla gracza"; player++; }

		else if (attack == 2 && num == 1) { cout << "Punkt dla SI"; si++; }
		else if (attack == 0 && num == 2) { cout << "Punkt dla SI"; si++; }
		else if (attack == 1 && num == 0) { cout << "Punkt dla SI"; si++; }

		cout << endl;
		cout << "Punkty gracza: " << player << endl;
		cout << "Punkty komputera: " << si << endl;
		cout << endl;

		if (player > si + 2 || si > player + 2) {
			correct = false;
		}
	}

	if (player > si) {
		cout << "Gracz zwyciezyl!" << endl;
		return 0;
	}
	else {
		cout << "Komputer zwyciezyl!" << endl;
		return 0;
	}
}

