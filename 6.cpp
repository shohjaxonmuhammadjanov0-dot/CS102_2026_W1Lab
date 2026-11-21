#include <iostream>
using namespace std;
int helper(int n, int k, int position, int direction) {
    if (k == 0)
        return position;

    position += direction;

    if (position == n - 1)
        direction = -1;

    else if (position == 0)
        direction = 1;

    return helper(n, k - 1, position, direction);
}
int numberOfChild(int n, int k) {
    return helper(n, k, 0, 1);
}
int main() {
    int n, k;
    cin >> n >> k;
    cout << numberOfChild(n, k);
}
