#include <iostream>

int main()
{
    int n, m;
    std::cin >> n >> m;
    int **matrix = new int*[m];
    for (int i = 0; i < m; ++i)
    {
        matrix[i] = new int[n];
    }
    for (int i = 0; i < m; ++i)
    {
        for (int j = 0; j < n; ++j)
        {
            matrix[i][j] = rand()%100001;
        }
    }


    for (int i = 0; i < m; ++i)
    {
        for (int j = 0; j < n; ++j)
        {
            std::cout << matrix[i][j] << "\t";
            
            // for (int space = )
        }
        std::cout << "\n";
    }

    for (int i = 0; i < n; ++i){
        delete[] matrix[i];
    }
    delete[] matrix;
    return 0;
}
