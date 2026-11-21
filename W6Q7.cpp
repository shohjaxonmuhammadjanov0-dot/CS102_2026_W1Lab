#include <iostream>
using namespace std;
void printStars(int k) {
    for (int i = 1; i <= k; i++) {
        cout << "*";
    }
    cout << endl;
}
int main() {
    int n;
    cin >> n;
for (int i = 1; i <= n; i++) {
        printStars(i);
    }

    cout << endl;
    for (int i = n; i >= 1; i--) {
        printStars(i);
    }

    return 0;
}