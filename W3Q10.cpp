#include <iostream>
using namespace std;

int main() {
    int radius, xCenter, yCenter;
    int x1, y1, x2, y2;

    cin >> radius >> xCenter >> yCenter >> x1 >> y1 >> x2 >> y2;

    int closestX;
    int closestY;
    if (xCenter < x1)
        closestX = x1;
    else if (xCenter > x2)
        closestX = x2;
    else
        closestX = xCenter;

    if (yCenter < y1)
        closestY = y1;
    else if (yCenter > y2)
        closestY = y2;
    else
        closestY = yCenter;

    int dx = xCenter - closestX;
    int dy = yCenter - closestY;

    if (dx * dx + dy * dy <= radius * radius)
        cout << "true" << endl;
    else
        cout << "false" << endl;

    return 0;
}