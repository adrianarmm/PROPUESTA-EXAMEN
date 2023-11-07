#include <iostream>
#include <cmath>

int main() {
    for (int a = -3; a <= 3; a++) {
        for (int b = -4; b <= 4; b++) {
            int c = sqrt(a * a + b * b);
            if (a * a + b * b == c * c) {
                if (c <= 5) {
                    std::cout << a << " - " << b << " - " << c << std::endl;
                }
            }

        }
    }
    return 0;

int main() {
    for (int d = -6; d <= 6; d++) {
        for (int e = -8; e <= 8 ; e++) {
            int f = sqrt(d * d + e * e);
            if (f * f == d * d + e * e && f <= 10) {
                std::cout << d << " - " << e << " - " << f << std::endl;
            }

        }

    }
}
    return 0;



