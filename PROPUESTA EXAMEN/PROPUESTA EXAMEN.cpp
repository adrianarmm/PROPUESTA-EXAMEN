#include <iostream>
#include <cmath>

int main() {
    for (int a = -3; a <= 3; a++) {
        for (int b = -4; b <= 4; b++) {
            int c = sqrt(a * a + b * b);
            if (c * c == a * a + b * b && c <= 5) {
                std::cout << a << " - " << b << " - " << c << std::endl;
            }

        }
    }
    return 0;
}