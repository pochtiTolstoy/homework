#include <iostream>
#include <cmath>
double mysqrt(double x, double eps=1e-6)
{
    double zn = 1;
    double zp;
    while(fabs(zn - zp) > eps)
    {
        zp = zn;
        zn = zp - (zp * zp - x) / (2 * zp);
    }
    return zn;
}


int main()
{
    std:: cout << mysqrt(10);
    return 0;
}
