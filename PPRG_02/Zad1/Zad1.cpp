#include <iostream>

using namespace std;

int main()
{
    int x, y;
    int w = 0;
    cin >> x;
    cin >> y;

    for (int i = x; i <= y; i++) {
        if (i % 2) {
            w += i;
        }

    }

    cout << "Z: " << w;
}

