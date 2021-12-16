//Для заданного значения n вычислить выражение: S = 1 + 1/2 + 1/3 + ... + 1/n
#include <iostream>


int main() {
    int n;
    std::cin >> n;
    double s = 0;
    for (int i = 1; i <= n; ++i)
    {
        s += 1./i;
    }
    std::cout << s << std::endl;

    return 0;
}
