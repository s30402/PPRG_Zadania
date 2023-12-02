#include <iostream>
using namespace std;

void Quicksort(int, int);

int arr[] = { 10,9,80,6,5,3,2,1,16,7,17,18,19 };

int main()
{
    int size_arr = sizeof(arr) / sizeof(arr[0]);
    Quicksort(0, size_arr - 1);

    for (int i = 0; i < size_arr; i++) {
        cout << arr[i] << endl;
    }
}

void Quicksort(int l, int r) {

    int i = l;
    int j = r;
    int x = arr[(l + r) / 2];

    do {
        while (arr[i] < x) i++;
        while (arr[j] > x) j--;

        if (i <= j) {
            swap(arr[i], arr[j]);
            i++;
            j--;
        }
    } while (i <= j);

    if (l < j) Quicksort(l, j);
    if (r > i) Quicksort(i, r);
}
