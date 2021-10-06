#include <iostream>
using namespace std;
int check(int);

int main() {
    int num;
    cin >> num;
    cout << check(num);
}

int check(int num) {
    int count = 0;
    for (int i = 1; i <= num; ++i) {
        if (i < 100) {
            count++;
        } else if (i >= 100 && i < 1000) {
            if (i % 10 - i / 10 % 10 == i / 10 % 10 - i / 100 % 10) {
                count++;                
            }
        }
    }
    return count;
}