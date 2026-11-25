// Ask how many marks there are, repeating the question until the answer is at least 1 (do-while).
// Then read the marks with a for loop; ask for each mark again until it is from 0 to 100 (a
// do-while inside the for). Print the average with two decimals, the highest and the lowest mark.
#include <iomanip>
#include <iostream>
using namespace std;
int main() {
    int n;
    double high = 0, low = 100;
    double mark, result = 0;
    do {
        cout << "how many marks are there? " << endl;
        cin >> n;
    } while (n < 1);
    for (int i = 1; i <= n; i++) {
        do {
            cin >> mark;
        } while (mark <= 1 || mark >= 100);
        result += mark;
        if (mark > high) {
            high = mark;
        }
        if (mark < low) {
            low = mark;
        }
    }
    double average = result / n;
    cout << fixed << setprecision(2);
    cout << average << " " << low << "-" << high;
    return 0;
}
