#include <iostream>
using namespace std;
// int countDigits(int n) returns the number of digits of n ≥ 0
int countDigits(int n) {
    int count = 0;
    do {
        count++;
        n /= 10;
    } while (n > 0);
    return count;
}
// int main(){
// int a;
// cin>>a;
// cout<<countDigits(a);
// return 0;
//}
// int rotate(int n) moves the last digit of n to the front (rotate(1234) is 4123,
// rotate(98) is 89, rotate(7) is 7)
int rotate(int n) {
    int temp = n % 10;
    int pownum = 1;
    for (int a = 1; a < countDigits(n); a++) {
        pownum *= 10;
    }
    return temp * pownum + n / 10;
}
// int main(){
//   int a;
// cin>>a;
// cout<<rotate(a);
// return 0;
//}
// bool isRotation(int a, int b) returns true when b
// can be obtained from a by rotating it some numbe-r of times (1234 and 3412: true; 1234 and 1243:
// false)
bool isRotation(int a, int b) {
    int digits = countDigits(a);
    for (int i = 0; i < digits; i++) {
        if (a == b) {
            return true;
        }
        a = rotate(a);
    }
    return false;
}
int main() {
    int a, b;
    cin >> a >> b;
    cout << isRotation(a, b);
}
