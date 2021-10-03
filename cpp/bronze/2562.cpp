#include <iostream>
using namespace std;

int main() {
    int input, index;
    int maximum = 0;
    for (int i = 1; i <= 9; ++i) {
        cin >> input;
        if (input > maximum) {
            maximum = input;
            index = i;
        }
    }
    cout << maximum << "\n" << index;
    return 0;
}