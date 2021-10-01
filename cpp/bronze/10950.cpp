#include <iostream>
using namespace std;

int main() {
    int T, a, b;
    cin >> T;
    int result[T];

    for (int i = 0; i < T; ++i) {
        cin >> a >> b;
        result[i] = a + b;
    }
    
    for (int i : result) {
        cout << i << endl;
    }
}