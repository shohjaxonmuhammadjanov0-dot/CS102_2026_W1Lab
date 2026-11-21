#include <iostream>
using namespace std;
int main () {
    int a,b, c;
    cin >> a >> b >> c;
    if (a>0 && b>0 && c>0) {
        cout << ((a+b+c+1)/2) << endl;
    }
    else if (a==0 && b==0) { 
        cout << c << endl;
    }
    else if (a==0 && c==0) {
        cout << b << endl;
    }
    else {
        cout << a << endl;
        return 0;
    }
}