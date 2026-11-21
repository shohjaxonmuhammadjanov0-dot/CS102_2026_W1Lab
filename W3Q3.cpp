#include <iostream>
using namespace std;

int main() {
    int x = 0;
    string s1, s2, s3;

    cin >> s1 >> s2 >> s3;

    if (s1 == "++X" || s1 == "X++") x++;
    else x--;

    if (s2 == "++X" || s2 == "X++") x++;
    else x--;

    if (s3 == "++X" || s3 == "X++") x++;
    else x--;

    cout << x << endl;
    return 0;
}