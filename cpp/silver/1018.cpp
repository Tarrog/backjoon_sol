#include <iostream>
using namespace std;

int main () {
    int x, y;
    cin >> y >> x;

    char arr[x + 1][y + 1];
    for (int i = 0; i < y; ++i) {
        for (int j = 0; j < x; ++j) {
            cin >> arr[j][i];
        }
    }

    int min = 64;
    for (int i = 0; i < x - 7; ++i) {
        for (int j = 0; j < y - 7; ++j) {
            int count = 0;
            char base = arr[i][j];
            for (int k = i; k < i + 8; ++k) {
                for (int l = j; l < j + 8; ++l) {
                    if (base == arr[k][l] && l != j || base != arr[k][l] && l == j) {
                        ++count;
                        base = 153 - arr[k][l];
                    } else {
                        base = arr[k][l];
                    }
                }
            }

            min = min > count ? count : min;
            count = 0;
            base = 158 - arr[i][j];
            for (int k = i; k < i + 8; ++k) {
                for (int l = j; l < j + 8; ++l) {
                    if (base == arr[k][l] && l != j || base != arr[k][l] && l == j) {
                        ++count;
                        base = 153 - arr[k][l];
                    } else {
                        base = arr[k][l];
                    }
                }
            }

            min = min > count ? count : min;
        }
    }

    cout << min;
}