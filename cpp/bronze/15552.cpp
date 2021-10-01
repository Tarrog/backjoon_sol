#include <iostream>
using namespace std;

int main() {
    int T, a, b;
    cin >> T;
    cin.tie(NULL);
    cout.tie(NULL);
    ios::sync_with_stdio(false);

    for (int i = 0; i < T; ++i) {
        cin >> a >> b;
        cout << a + b << "\n";
    }
}