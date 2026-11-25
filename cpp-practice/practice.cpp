#include <iostream>
using namespace std;
int main() {
    int x = 1, c = 0;
    while (x <= 27) {
        x = x * 3;
        c = c + 1;
        cout << x << "  " << c << endl;
    }
}