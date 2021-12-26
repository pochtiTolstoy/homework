#include <iostream>

#include <cmath>

\\slow

int main() {
    int R;
    int counter = 0;
    do 
    {
        std::cout << "Введите целочисленный радиус R<10^6: ";
        std::cin >> R;
    }while(R<=0 && R >= pow(10,6));

    for (int y=R; y>=-R; --y)
    {
        for (int x=-R; x<=R; ++x)
        {
            // std::cout << x << y << std::endl;
            if (x*x + y*y <= R*R)
            {
                counter += 1;
            }
        }
    }
    std::cout << counter << std::endl;

    return 0;
}
