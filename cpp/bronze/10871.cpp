#include <iostream>
#include <vector>
using namespace std;

int main() {
    int N, X, num;
    int j = 0;
    cin >> N >> X;
    vector <int> nums;
    for (int i = 0; i < N; ++i) {
        cin >> num;
        if (num < X) {
            nums.push_back(num);
        }
    }
    for (int i : nums) {
        cout << i << " ";
    }
}