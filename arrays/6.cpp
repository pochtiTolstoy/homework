#include <iostream>
#include <cmath>
#include <vector>


int main()
{   
    int n;
    std::cout << "Введите размер массива: " << '\n';
    std::cin >> n;
    if (n == 0 || n == 1)
    {
        std::cout << 0 << '\n';
        return 1;
    }

    int *arr = new int[n];
    for (int i = 0; i < n; ++i)
    {
        std::cin >> arr[i];
    }
    if (n == 2)
    {
        std::cout << arr[1]-arr[0] << '\n';

    }

    int diff1 = arr[1]-arr[0];
    int diff2 = arr[2]-arr[1];
    if (diff1 != diff2)
    {
        std::cout << 0 << '\n';
        return 1;
    }


    for (int i = 1; i < n - 1; ++i)
    {
        if (arr[i+1]-arr[i] != diff1)
        {
            std::cout << 0 << '\n';
            return 1;
        }
    }

    std::cout << diff1 << '\n';
    return 0;
}
