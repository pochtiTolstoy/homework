#include <iostream>

int main() 
{
    int n;
    int max = 0;
    int elem1, elem2;
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
            elem1 = arr[i];
            elem2 = arr[i+1];
        }
    }
    std::cout <<"Max: " << max <<" Elem1 " << elem1 << " Elem2 " << elem2 << "\n";

    delete[] arr;
    return 0;
}
