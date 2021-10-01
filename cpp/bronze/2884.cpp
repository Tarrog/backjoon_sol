#include <iostream>
using namespace std;

int main() {
    int H, M, sum;
    cin >> H >> M;
    sum = H * 60 + M - 45;
    
    if (sum < 0) {
        sum += 60 * 24;
    }

    cout << sum / 60 << " " << sum % 60;
    return 0;
}