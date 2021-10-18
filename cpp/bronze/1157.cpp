#include <iostream>
#include <string>
using namespace std;

int count(string, char);

int main() {
    string input, ch;
    int max = -1;
    cin >> input;

    for (char i = 'A'; i <= 'Z'; ++i) {
        int result = count(input, i);
        if (max < result) {
            max = result;
            ch = i;
        } else if (max == result) {
            ch += i;
        }
    }

    if (ch.size() == 1) {
        cout << ch;
    } else {
        cout << "?";
    }
}

int count(string input, char alpha) {
    int tempCount = 0;
    for (int i = 0; i < input.size(); ++i) {
        tempCount += input[i] == alpha || input[i] == alpha + 32 ? 1 : 0;
    }
    return tempCount;
}