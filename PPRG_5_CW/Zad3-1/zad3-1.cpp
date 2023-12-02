#include <iostream>
#include <cmath>
using namespace std;

double pole(double);
double pole(double, double);
double pole(double, bool);
double pole(double, double, int);

int main() {

    double a,b,c;
    int choice = 0;

    cout << "Wybierz figure: \n 1 - Kwadrat \n 2 - Prostokat \n 3 - Kolo \n 4 -Trojkat \n";
    cin >> choice;

    switch (choice) {
        case 1:
            cout << "Podaj dlugosc boku kwadratu: ";
            cin >> a;
            cout << "Pole kwadratu: " << pole(a) << endl;
            break;
        case 2:
            cout << "Podaj długosc i szerokosc prostokata: ";
            cin >> a >> b;
            cout << "Pole prostokata: " << pole(a, b) << endl;
            break;
        case 3:
            cout << "Podaj promien kola: ";
            cin >> a;
            cout << "Pole kola: " << pole(a, true) << endl;
            break;
        case 4:
            cout << "Podaj podstawę i wysokosc trojkata: ";
            cin >> a >> b;
            cout << "Pole trojkata: " << pole(a, b, 0) << endl;
            break;
        default:
            cout << "Zly wybor.";
    }

    return 0;
}

double pole(double a) {
    return a*a;
}

double pole(double a, double b) {
    return a*b;
}

double pole(double r, bool isCircle) {
    return 2*asin(1.0) * r * r;
}

double pole(double a, double h, int c) {
    return 0.5 * a * h;
}
