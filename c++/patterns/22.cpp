// 5 5 5 5 5 5 5 5 5
// 5 4 4 4 4 4 4 4 5
// 5 4 3 3 3 3 3 4 5
// 5 4 3 2 2 2 3 4 5
// 5 4 3 2 1 2 3 4 5
// 5 4 3 2 2 2 3 4 5
// 5 4 3 3 3 3 3 4 5
// 5 4 4 4 4 4 4 4 5
// 5 5 5 5 5 5 5 5 5

#include <iostream>
using namespace std;

int main() {
    int n = 5;

    for (int i = 0; i < 2 * n - 1; i++) {
        for (int j = 0; j < 2 * n - 1; j++) {

            int minDist = i;

            if (j < minDist) {
                minDist = j;
            }

            if (2 * n - 2 - i < minDist) {
                minDist = 2 * n - 2 - i;
            }

            if (2 * n - 2 - j < minDist) {
                minDist = 2 * n - 2 - j;
            }

            cout << n - minDist << " ";
        }
        cout << endl;
    }

    return 0;
}
