#include <iostream>
#include <cmath>

int main() {
    for (int i = 3; i <= 100; i++) {
        for (int j = i; j <= 100; j++) {
            int c = sqrt(i * i + j * j);
            if (c * c == i * i + j * j && c <= 100) {
                std::cout << i << " - " << j << " - " << c << std::endl;
            }

        }
    }
    return 0;
}
