#include <iostream>
using namespace std;

int main() {
    int n, num;
    cin >> n;
    cin >> num;
    int result = 0;

    while (num > 0) {
        result += num % 10;
        num /= 10;
    }
    cout << result;
}