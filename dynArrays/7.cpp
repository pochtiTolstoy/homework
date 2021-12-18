#include <iostream>

void shiftArray(int A[], int n, int k)
{
    int counter = 0;
        k %= n;
    
    
    while (k--)
    {
        int temp = A[0];
        for (int i = 0; i < n; ++i)
        {
            A[i] = A[i+1];
            std::cout << A[i+1] << " ";
        }
        A[n-1] = temp;
    }
}

int main()
{
    int A[10] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
    shiftArray(A, 10, 1);
    std::cout << "\n";

    for(int i = 0; i < 10; ++i)
    {
        std::cout << A[i];
    }
    std::cout << "\n";
    return 0;
}
