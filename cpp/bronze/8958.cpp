#include <iostream>
using namespace std;

int score(char []);

int main () {
    int t;
    char ox[80];
    cin >> t;

    for (int i = 0; i < t; ++i) {
        cin >> ox;
        cout << score(ox) << endl;
    }
}

int score(char arr[]) {
    int cond = 0;
    int result = 0;
    for (int i = 0; arr[i] != '\0'; ++i) {
        if (arr[i] == 'X') {
            cond = 0;
            continue;
        } else if (arr[i] == 'O') {
            cond++;
            result += cond;
        }
    }
    return result;
}