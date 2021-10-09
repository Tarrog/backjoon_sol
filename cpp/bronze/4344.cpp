#include <iostream>
using namespace std;

int main () {
    int t;
    cin >> t;

    for (int i = 0; i < t; ++i) {
        int n;
        cin >> n;
        int score[1000] = {0,};
        int sum = 0;
        int count = 0;
        float average = 0;
        for (int j = 0; j < n; ++j) {
            cin >> score[j];
            sum += score[j];
        }
        average = sum / n;
        for (int j = 0; j < n; ++j) {
            count += score[j] > average ? 1 : 0;
        }
        cout << fixed;
        cout.precision(3);
        cout << float(count) / n * 100 << "%" << endl;
    }
}