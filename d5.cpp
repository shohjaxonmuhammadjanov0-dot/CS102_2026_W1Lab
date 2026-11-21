#include <iostream>

int gcd(int a, int b) {
    while (b != 0) {
        const int remainder = a % b;
        a = b;
        b = remainder;
    }
    return a;
}

bool canMeasureWater(int x, int y, int target) {
    if (x <= 0 || y <= 0 || target <= 0) {
        return false;
    }

    if (target > x + y) {
        return false;
    }

    const int divisor = gcd(x, y);
    return target % divisor == 0;
}

int main() {
    int x = 0;
    int y = 0;
    int target = 0;

    if (!(std::cin >> x >> y >> target)) {
        std::cerr << "Error: enter three integers (x, y, target).\n";
        return 1;
    }

    if (x < 1 || x > 1000 || y < 1 || y > 1000 || target < 1 || target > 1000) {
        std::cerr << "Error: x, y, and target must each be between 1 and 1000.\n";
        return 1;
    }

    std::cout << (canMeasureWater(x, y, target) ? "true" : "false") << '\n';
    return 0;
}
