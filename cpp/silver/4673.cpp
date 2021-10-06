#include <iostream>
using namespace std;

int main () {
    int nums[10001] = {0,};
    for (int i = 1; i <= 9975; ++i) {
        int num = 0;
        num = i + i % 10 + i / 10 % 10 + i / 100 % 10 + i / 1000 % 10 + i / 10000 % 10;
        nums[num] = num;
    }

    for (int i = 1; i <= 10000; ++i) {
        if (nums[i] == 0) {
            cout << i << endl;
        }
    }
    return 0;
}