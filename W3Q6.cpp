#include <iostream>
using namespace std;

int main() {
    int a, b, c;
    cin >> a >> b >> c;

    int total = a + b + c;
    int largest;

    if (a >= b && a >= c)
        largest = a;
    else if (b >= a && b >= c)
        largest = b;
    else
        largest = c;

    if (largest > total - largest)
        cout << largest << endl;
    else
        cout << (total + 1) / 2 << endl;

    return 0;
}