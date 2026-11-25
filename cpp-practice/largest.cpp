#include <iostream>
using namespace std;
int main() {
    int a, b, c;
    cout << "a= ";
    cin >> a;
    cout << "b= ";
    cin >> b;
    cout << "c= ";
    cin >> c;
    if (a > b or a > c)
        cout << "a is the largest" << endl;
    else if (b > a or b > c)
        cout << "b is the largest" << endl;
    else if (c > b or c > a)
        cout << "c is the largest";
    else
        cout << "there are equal two or three the integrers ";
    return 0;
}