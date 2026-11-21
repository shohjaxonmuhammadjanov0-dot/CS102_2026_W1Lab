// Write double toFahrenheit(double c) (𝐹 = 𝐶 · 9/5 + 32) and void printRow(int c), which prints one
// table row using toFahrenheit. In main, read from, to and step and print the table with one
// decimal (fixed, setprecision(1)), using a for loop that calls printRow.
#include <iomanip>
#include <iostream>
using namespace std;
double toFahrenheit(double c) {
    double result = c * 1.8 + 32;
    return result;
}
void printRow(int c) {
    cout << fixed << setprecision(1);
    cout << "Celcius: " << c << " " << setw(10) << "Fahrenheit: " << toFahrenheit(c) << endl;
}
int main() {
    int from, to, step;
    cin >> from >> to >> step;
    for (; from <= to; from += step) {
        printRow(from);
    }
}
