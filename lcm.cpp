#include <iostream>

int gcd(int a, int b) {
    if (b == 0) {
        return a;
    }
    return gcd(b, a % b);
}

int lcm(int a, int b) {
    return (a * b) / gcd(a, b);
}

int main() {
    int a, b;
    std::cout << "Введіть перше число: ";
    std::cin >> a;
    std::cout << "Введіть друге число: ";
    std::cin >> b;
    std::cout << "НСК чисел " << a << " і " << b << " = " << lcm(a, b) << std::endl;
    return 0;
}
