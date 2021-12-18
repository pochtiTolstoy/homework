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
    int l_counter = 0;
    int temp = 0;

    for (int i = 0; i < m; ++i)
    {
        for (int j = 0; j < n; ++j)
        {
            temp = matrix[i][j];
            l_counter = 0;
            while(temp)
            {
                l_counter++;
                temp /= 10;
            }
            for (int space = 0; space < 6-l_counter; ++space)
            {
                std::cout << " ";
            }
            std::cout << matrix[i][j];
            
        }
        std::cout << "\n";
    }

    for (int i = 0; i < n; ++i){
        delete[] matrix[i];
    }
    delete[] matrix;
    return 0;
}
