#include <iostream>


int main()
{
    int n, m;
    std::cin >> n >> m;
    int counter = 0;
    int** A = new int*[m];
    for (int i = 0; i < m; ++i)
    {
        A[i] = new int[m];
    }
    for (int i = 0; i < m; ++i)
    {
        for (int j = 0; j < m; ++j)
        {
            counter++;
            if (i % 2 == 0 && counter <= n*n)
            {
                A[i][j] = counter;
            } else if (counter <= n * n){
                A[i][m - j - 1] = counter;
            }
            else
            {
                A[i][j] = 0;
            }
        }
    }

    for (int i = 0; i < m; ++i)
    {
        for (int j = 0; j < m; ++j)
        {
            std::cout << A[i][j] << "    ";
        }
        std::cout << "\n";
    }

    for (int i = 0; i < m; ++i) {
        delete[] A[i];
    }
    delete[] A;
    return 0;
}
