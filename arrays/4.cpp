#include <iostream>

int main() 
{
    int n;
    std::cin >> n;
    int *arr = new int[n];
    for (int i = 0; i < n; ++i)
    {
        std::cin >> arr[i];
    }

    for (int i = 0; i < n/2; ++i)
    {
        std::cout << arr[i] << "\t";
        std::cout << arr[n-i-1] << std::endl;

    }
    if (n%2 != 0) std::cout << arr[n/2] << "\n";
    return 0;
}
