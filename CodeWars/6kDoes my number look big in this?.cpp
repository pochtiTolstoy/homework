#include <cmath>

bool narcissistic( int value ){
    int num = value;
    int temp = num;
    int p = 0;
    int sum = 0;
    while (temp)
    {
        p++;
        temp /= 10;
    }
    temp = num;

    for (int i = 0; i < p; ++i)
    {
        sum += pow(temp%10, p);
        temp /= 10;
        
    }
    if (num == sum)
    {
        return true;
    }
    return false;
    

}
