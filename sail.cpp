#include <iostream>
#include <cmath>

bool firstCircle(double x, double y)
{
    if(y<=0 && x>=-2 && x <= 0 && y >= -sqrt(1-(x+1)*(x+1)))
    {
        return true;
    }
    return false;
}

bool secondCircle(double x, double y)
{
    if(y<=0 && x>=-2 && x <= 0 && y >= -sqrt(1-(x-1)*(x-1)))
    {
        return true;
    }
    return false;
}

bool mod(double x, double y)
{
    if(x>=-1 && x <= 1 && y >= 0 && y <= -2*fabs(x)+2)
    {
        return true;
    }
    return false;
}

int main() {
    double x, y;
    std::cout << "Input x and y: ";
    std::cin >> x >> y;
    if (firstCircle(x, y) || secondCircle(x, y) || mod(x, y))
    {
        std::cout << "Hurray!" << std::endl;
    }
    else
    {
        std::cout << "Nope :(" << std::endl;
    }
    return 0;
}
