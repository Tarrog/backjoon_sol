#include <iostream>
using namespace std;

int main() {
    int T, a, b;
    cin >> T;
    cin.tie(NULL);
    cout.tie(NULL);
    ios::sync_with_stdio(false);

    for (int i = 1; i <= T; ++i) {
        cin >> a >> b;
        cout << "Case #" << i << ": ";
        cout << static_cast<char>(a + 48) << " + " << static_cast<char>(b + 48);
        cout << " = " << a + b << "\n";
    }
}