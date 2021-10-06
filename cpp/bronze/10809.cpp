#include <iostream>
#include <cstring>
using namespace std;

int main() {
    string input;
    cin >> input;

    for (char i = 'a'; i <= 'z'; ++i) {
        for (int j = 0; j < input.length(); ++j) {
            if (input[j] == i) {
                cout << j << " ";
                break;
            } else if (j == input.length() - 1) {
                cout << -1 << " ";
            }
        }
    }
}