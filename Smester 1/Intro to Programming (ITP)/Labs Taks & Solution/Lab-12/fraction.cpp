#include <iostream>
using std::ostream, std::cout, std::endl;

struct fraction {
    int num;
    int denom;
};

int gcd(int p, int q) {
    int r = p % q;
    while (r != 0) {
        p = q;
        q = r;
        r = p % q;
    }
    return q;
}

ostream& operator<<(ostream& os, const fraction& f) {
    os << f.num << "/" << f.denom;
    return os;
}

fraction operator+(const fraction& f1, const fraction& f2) {
    int num = f1.num * f2.denom + f2.num * f1.denom;
    int denom = f1.denom * f2.denom;
    int g = gcd(num, denom);
    return {num/g, denom/g};
}

void operator+=(fraction& f1, const fraction& f2) {
    int num = f1.num * f2.denom + f2.num * f1.denom;
    int denom = f1.denom * f2.denom;
    int g = gcd(num, denom);
    f1.num = num/g;
    f1.denom = denom/g;
}

fraction operator*(const fraction& f1, const fraction& f2) {
    int num = f1.num * f2.num;
    int denom = f1.denom * f2.denom;
    int g = gcd(num, denom);
    return {num/g, denom/g};
}

void operator*=(fraction& f1, const fraction& f2) {
    int num = f1.num * f2.num;
    int denom = f1.denom * f2.denom;
    int g = gcd(num, denom);
    f1.num = num/g;
    f1.denom = denom/g;
}

bool operator==(const fraction& f1, const fraction& f2) {
    int g1 = gcd(f1.num, f1.denom);
    int g2 = gcd(f2.num, f2.denom);
    return (f1.num/g1 == f2.num/g2) && (f1.denom/g1 == f2.denom/g2);
}


int main() {
    fraction f1 {1, 2};
    cout << f1 << endl; // prints 1/2

    fraction f2 {3, 4};
    f2 += f1;
    cout << f2 << endl; // should prints 5/4

    fraction f3 = f1 * f2;
    cout << f3 << endl; // should prints 5/8

    fraction f4 {1, 3};
    f3 *= (f1 * f2);
    cout << f3 << endl; // should prints 25/64

    fraction f5 {2, 4}; // same as f1
    if (f1 == f5)
        cout << "f1 and f5 are equal" << endl;
    else
        cout << "f1 and f5 are not equal" << endl;
    // the above should print "f1 and f5 are equal"
}
