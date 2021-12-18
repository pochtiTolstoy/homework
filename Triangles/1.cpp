#include <iostream>

void solution1() {
    int n;
    std::cout << "Введите число: ";
    std::cin >> n;
    for (int i = 1; i <= n; ++i) {
        for (int j = 0; j < i; ++j) {
            std::cout << '*';
        }
        std::cout << "\n";
    }
}


int main() {
    std::cout << "Hello!\n";
    solution1();
    return 0;
}
