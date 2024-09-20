#include <iostream>

bool is_smaller(char *s1, char *s2) {
    for (int i = 0; s1[i] != '\0' || s2[i] != '\0'; ++i) {
        if (s1[i] < s2[i]) {
            return true;
        } else if (s1[i] > s2[i]) {
            return false;
        }
    }
    return false; 
}

bool is_smaller_ptr(char *s1, char *s2) {
    while (*s1 != '\0' || *s2 != '\0') {
        if (*s1 < *s2) {
            return true;
        } else if (*s1 > *s2) {
            return false;
        }
        ++s1;
        ++s2;
    }
    return false; 
}

int main() {
    char s1[] = "hello";
    char s2[] = "world";

    std::cout << is_smaller(s1, s2) << std::endl;  // prints 1
    std::cout << is_smaller(s2, s1) << std::endl;  // prints 0
    std::cout << is_smaller(s1, s1) << std::endl;  // prints 0

    std::cout << is_smaller_ptr(s1, s2) << std::endl;  // prints 1
    std::cout << is_smaller_ptr(s2, s1) << std::endl;  // prints 0
    std::cout << is_smaller_ptr(s1, s1) << std::endl;  // prints 0

    return 0;
}
