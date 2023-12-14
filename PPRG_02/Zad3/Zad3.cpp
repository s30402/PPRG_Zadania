#include <iostream>

using namespace std;

int main()
{
    int x;
    int w = 1;

    cin >> x;
    while (x > 0) {
        w = w * x;
        x -= 1;
    }

    cout << "Wynik: " << w << endl;
}

