#include <iostream>
#include <cstring>
using namespace std;

int main () {
    int t;
    cin >> t;

    for (int i = 0; i < t; ++i) {
        int r;
        char input[20];
        cin >> r;
        cin >> input;
        
        for (int j = 0; j < strlen(input); ++j) {
            for (int k = 0; k < r; ++k) {
                cout << input[j];
            }
        }
        
        cout << endl;
    }
}