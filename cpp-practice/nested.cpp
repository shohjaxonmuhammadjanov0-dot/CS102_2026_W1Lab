// Write three functions. int countDigits(int n) returns the number of digits of n ≥ 1. int
// digitAt(int n, int k) returns the k-th digit of n counted from the left, starting at 1
// (digitAt(48215, 2) is 8, digitAt(7, 1) is 7). bool isPalindrome(int n) returns true when the
// digits of n read the same from both ends (12321 and 4004: true; 1231: false). digitAt and
// isPalindrome must use the functions above them. Write only the three function definitions; for
// full marks, do not use string, to_string, pow or any other built-in/library function.
#include <iostream>
using namespace std;
int countDigits(int n) {
    int count = 0;
    while (n > 0) {
        n /= 10;
        count++;
    }
    return count;
}
int digitAt(int n, int k) {
    int place = 1;
    for (int i = 1; i <= countDigits(n) - k; i++) {
        place *= 10;
    }
    return (n / place) % 10;
}
bool isPalindrome(int n) {
    for (int i = 1; i <= countDigits(n) / 2; i++) {
    }
}
