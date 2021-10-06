#include <iostream>
using namespace std;

int main() {
    int n;
    char num[101];
    cin >> n;
    cin >> num;
    int result = 0;

    for (int i = 0; i < n; ++i) {
        result += (static_cast<int>(num[i]) - 48) % 10;
    }
    cout << result;
}