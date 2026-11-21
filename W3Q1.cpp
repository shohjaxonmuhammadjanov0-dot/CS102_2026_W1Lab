#include <iostream>
using namespace std;

int main() {
    int balance = 100;
    int purchaseAmount;

    cin >> purchaseAmount;

    int roundedAmount;

    if (purchaseAmount % 10 >= 5) {
        roundedAmount = ((purchaseAmount / 10) + 1) * 10;
    } else {
        roundedAmount = (purchaseAmount / 10) * 10;
    }

    cout << balance - roundedAmount << endl;
    return 0;
}