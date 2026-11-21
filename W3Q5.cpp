#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    if (n / 1000 == 6) {
        n += 3000;
    }
    else if ((n / 100) % 10 == 6) {
        n += 300;
    }
    else if ((n / 10) % 10 == 6) {
        n += 30;
    }
    else if (n % 10 == 6) {
        n += 3;
    }

    cout << n << endl;

    return 0;
}