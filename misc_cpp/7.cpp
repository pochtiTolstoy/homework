#include <iostream>
#include <cmath>

//Медленно! Но считает :)
int main()
{
    long long int R;
    long long int counter = 0;
    do 
    {
        std::cout << "Введите целочисленный радиус R<10^6: ";
        std::cin >> R;
    }while(R<=0 && R >= pow(10,6));

    for (long long int y = R; y > 0; --y)
    {
        for (long long int x = -R; x < 0; ++x)
        {
            if (x*x + y*y <= R * R)
            {
                counter += 4;
            }
        }
    }
    std::cout << counter + 4*R+1 << std::endl;
    return 0;
}
