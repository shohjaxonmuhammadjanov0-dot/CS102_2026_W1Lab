#include <iostream>
using namespace std;
int main() {
    int a;
    cout << "what is your age" << endl;
    cin >> a;
    if (a < 6)
        cout << "you will get ticket for free" << endl;
    else if (a < 18)
        cout << "you will get half price" << endl;
    else if (a < 64)
        cout << "you will pay full price" << endl;
    else
        cout << "you will get half price" << endl;
    return 0;
}