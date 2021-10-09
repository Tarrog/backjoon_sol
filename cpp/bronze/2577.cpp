#include <iostream>
using namespace std;

int countNum(int, int);

int main() {
    int a, b, c, mul;
    cin >> a;
    cin >> b;
    cin >> c;
    mul = a * b * c;

    for (int i = 0; i <= 9; ++i) {
        cout << countNum(mul, i) << endl;
    }
}

int countNum(int input, int num) {
    int result = 0;
    while (input > 0) {
        if (input % 10 == num) {
            result += 1;
        }
        input /= 10;
    }
    return result;
}