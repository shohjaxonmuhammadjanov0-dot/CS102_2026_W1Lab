// Read 𝑛 (1–9). Print the 𝑛 × 𝑛 multiplication table with every number in 4 columns (setw(4)), then
// an empty line, then a right-aligned triangle of stars of height 𝑛.
#include <iomanip>
#include <iostream>
using namespace std;
int main() {
    int n;
    cin >> n;
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            cout << setw(4) << i * j;
        }
        cout << endl;
    }
    cout << endl;
    for (int a = 1; a <= n; a++) {
        for (int b = 1; b <= n - a; b++) {
            cout << " ";
        }
        for (int c = 1; c <= a; c++) {
            cout << "*";
        }
        cout << endl;
    }
}
