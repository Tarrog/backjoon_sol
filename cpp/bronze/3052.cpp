#include <iostream>
#include <set>
using namespace std;

int main() {
    int input;
    set<int> nums;
    for (int i = 0; i < 10; ++i) {
        cin >> input;
        nums.insert(input % 42); 
    }
    cout << nums.size() << endl;
}