#include <iostream>

int main()
{
    int s1, s2, m1, m2, h1, h2;
    std::cin >> h1 >> m1 >> s1;
    std::cin >> h2 >> m2 >> s2;
    int t1 = h1 * 3600 + m1 * 60 + s1;
    int t2 = h2 * 3600 + m2 * 60 + s2;
    int dif = t2 - t1;
    std::cout << dif / 3600 << ":" << (dif % 3600) / 60 << ":" << (dif % 3600) % 60 << std::endl;

    return 0;
}
