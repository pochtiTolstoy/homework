#include <iostream>
#include <cmath>

//Мощь! Скорость! Больше скорости!

int main()
{
    long long int R;
    long long int counter = 0;
    do 
    {
        std::cout << "Введите целочисленный радиус R<10^6: ";
        std::cin >> R;
    }while(R<=0 && R >= pow(10,6));
    
    long long int squaredR = R*R;
    long long int squaredY;

    for (long long int y = R; y > 0; --y)
    {
        squaredY = y*y;

        for (long long int x = -R; x < 0; ++x)
        {
            if (x*x + squaredY <= squaredR)
            {
                break;
            }
            counter += 4;
        }
    }
    std::cout << (R*2+1)*(R*2+1) - counter << std::endl;
    return 0;
}
