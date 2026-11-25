#include <iostream>
using namespace std;
int main() {
    int n;
    cin >> n;
    for (int k = 1; k <= n; k++) {
        for (int s = 1; s <= 2 * (n - k); s++) {
            cout << " ";
        }

        for (int j = 1; j <= k; j++) {
            if (j > 1) {
                cout << " ";
            }
            cout << j;
        }
        for (int j = k - 1; j >= 1; j--) {
            cout << " " << j;
        }
        cout << endl;
    }
    return 0;
}
