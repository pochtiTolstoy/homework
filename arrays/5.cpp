#include <iostream>

int main() 
{
    int n;
    int max = 0;
    std::cin >> n;
    int *arr = new int[n];

    for(int i = 0; i < n; ++i)
    {
        std::cin >> arr[i];
    }

    for(int i = 0; i < n-1; ++i)
    {
        if (arr[i]+arr[i+1] > max) 
        {
            max = arr[i]+arr[i+1];
        }
    }
    std::cout << max << "\n";
    return 0;
}
