// Write int gcd(int a, int b) (Euclid: repeat r = a % b; a = b; b = r; until b is 0), int lcm(int
// a, int b) (using gcd) and long long power(int base, int exp) (a for loop). In main, show a menu
// in a do-while loop: 1 a b prints the gcd, 2 a b the lcm, 3 a b the power 𝑎 𝑏, 0 prints Bye;
// anything else prints Unknown choice.
#include <iomanip>
#include <iostream>
using namespace std;
int gcd(int a, int b) {
    while (b > 0) {
        int r = a % b;
        a = b;
        b = r;
    }
    return a;
}
int lcm(int a, int b) {
    return a * b / gcd(a, b);
}
long long power(int base, int exp) {
    long long original = base;
    for (int i = 1; i < exp; i++) {
        base *= original;
    }
    return base;
}
int main() {
    int choice;
    long long a, b;
    cin >> a >> b;
    do {
        cout << "choose an option from 1-4: " << endl;
        cout << "option 1: gcm" << endl;
        cout << "option 2: lcm" << endl;
        cout << "option 3: power" << endl;
        cout << "option 4: last mission" << endl;
        cin >> choice;
        switch (choice) {
            case 1:
                cout << gcd(a, b) << endl;
                break;
            case 2:
                cout << lcm(a, b) << endl;
                break;
            case 3:
                cout << power(a, b) << endl;
                break;
            case 0:
                cout << "bye! ";
        }
    } while (choice != 0);
    return 0;
}
