#include <iostream>
#include <cstring>
using namespace std;

int main () {
    string input;
    getline(cin, input);
    int len = input.length();
    int count = 1;
    for (int i = 0; i < len; ++i) {
        if (input[i] == ' ') {
            count++;
        }
    }

    if (input[0] == ' ') {
        count--;
    }
    if (input[len - 1] == ' ') {
        count--;
    }
    if (input.empty()) {
        cout << 0;
    } else {
        cout << count;
    }
}