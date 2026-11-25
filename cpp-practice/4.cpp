#include <iostream>
using namespace std;
int minBitFlips(int start, int goal) {
    if (start == 0 && goal == 0) {
        return 0;
    }
    int flip = (start % 2 != goal % 2) ? 1 : 0;
    return minBitFlips(start / 2, goal / 2) + flip;
}
int main() {
    int start, goal;
    cin >> start >> goal;
    cout << minBitFlips(start, goal);
}
