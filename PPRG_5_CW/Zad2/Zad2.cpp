#include <iostream>
using namespace std;

void mnozenie();

int wynik[2][2];
int MCZ_1[2][3]{ {6, 12, 3} , {2, -5, 1} };
int MCZ_2[3][2]{ {-15, 9}, {1,-4}, {4, 7} };


int main()
{
	mnozenie();
	cout << wynik[0][0] << " " << wynik[0][1] << endl;
	cout << wynik[1][0] << " " << wynik[1][0];

	return 0;

}

void mnozenie() {
	wynik[0][0] = MCZ_1[0][0] * MCZ_2[0][0] + MCZ_1[0][1] * MCZ_2[1][0] + MCZ_1[0][2] * MCZ_2[2][0];
	wynik[0][1] = MCZ_1[0][0] * MCZ_2[0][1] + MCZ_1[0][1] * MCZ_2[1][1] + MCZ_1[0][2] * MCZ_2[2][1];
	wynik[1][0] = MCZ_1[1][0] * MCZ_2[0][0] + MCZ_1[1][1] * MCZ_2[1][0] + MCZ_1[1][2] * MCZ_2[2][0];
	wynik[1][1] = MCZ_1[1][0] * MCZ_2[0][1] + MCZ_1[1][1] * MCZ_2[1][1] + MCZ_1[1][2] * MCZ_2[2][1];
}