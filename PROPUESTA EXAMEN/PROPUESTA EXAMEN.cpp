#include <iostream>
#include <cmath>

int main() {
    for (int a = -3; a <= 3; a++) {
        for (int b = -4; b <= 4; b++) {
            int c = sqrt(a * a + b * b);
            if (c*c == a * a + b * b  && c <= 5) {
                std::cout << a << " - " << b << " - " << c << std::endl;
            }

        }
    }

    for (int d = -6; d <= 6; d++) {
        for (int e = -8; e <= 8 ; e++) {
            int f = sqrt(d * d + e * e);
            if (f * f == d * d + e * e && f <= 10) {
                std::cout << d << " - " << e << " - " << f << std::endl;
            }

        }
    }

        for (int g = -5; g <= 5; g++) {
            for (int h = -12; h <= 12; h++) {
                int i = sqrt(g * g + h * h);
                if (i * i == g * g + h * h && i <= 13) {
                    std::cout << g << " - " << h << " - " << i << std::endl;
                }

            }
        }


        for (int m = -8; m <= 8; m++) {
            for (int n = -15; n <= 15; n++) {
                int o = sqrt(m * m + n * n);
                if (o * o == m * m + n * n && o <= 17) {
                    std::cout << m << " - " << n << " - " << o << std::endl;
                }
            }

        }
    return 0;
}
