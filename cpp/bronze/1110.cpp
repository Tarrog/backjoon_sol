#include <iostream>
using namespace std;

int cycle(int, int, int);

int main() {
    int num, origin;
    cin >> num;
    origin = num;
    cout << cycle(num, 1, origin) << "\n";
}

int cycle(int num, int chain, int origin) {
    int result = ((num % 10) * 10) + ((num % 10) + (num / 10)) % 10;
    return origin == result ? chain : cycle(result, chain + 1, origin);
}