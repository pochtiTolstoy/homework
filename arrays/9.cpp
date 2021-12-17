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
    int arSum = (n*(n+1))/2;
    int currSum = 0;
    for (int i = 0; i < n; ++i)
    {
        currSum += arr[i];
    }
    std::cout << arSum - currSum << '\n';

    return 0;
}
