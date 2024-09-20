#include <iostream>

int main() {
    int n;
    std::cout << "Enter an integer n: ";
    std::cin >> n;

    for (int a = 1; a <= n; ++a) {
        for (int b = a; b <= n; ++b) {
        	if((a * a * a + b * b * b) > n) break;
            for (int c = a + 1; c <= n; ++c) {
                for (int d = c; d <= n; ++d) {
                	if(c * c * c + d * d * d  > n) break;
                    if ((a * a * a + b * b * b == n) && (c * c * c + d * d * d == n) && (a != c && b != d && a != d &&  b != c)) {
                        std::cout << a << "^3 + " << b << "^3 = " << c << "^3 + " << d << "^3 = " << (a * a * a + b * b * b) << std::endl;
                        return 0;
                    }
                }
                if((c * c * c) > n) break;
            }
        }
        if((a * a * a) > n) break;
    }

    return 0;
}

