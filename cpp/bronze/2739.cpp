#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    
    for (int i = 1; i <= 9; ++i) {
        cout << static_cast<char>(n + 48) << " * " << i << " = " << n * i << endl;
    }
    return 0;
}