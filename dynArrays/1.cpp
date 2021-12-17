//Заполнить массив nxm (размеры вводит пользователь) числами от 1 до nm по змейке. 
//Нечетные строки слева направо, чётные -- в обратном порядке
#include <iostream>

int main()
{
    int n, m;
    std::cout << "Input n and m: ";
    std::cin >> n >> m;
    int counter = 0;
    int **matrix = new int*[m];
    for (int i = 0; i < m; ++i)
    {
        matrix[i] = new int[n];
    }
    for (int i = 0; i < m; ++i)
    {
        for (int j = 0; j < n; ++j)
        {
            ++counter;
            if (i % 2 == 0)
            {
                matrix[i][j] = counter;
            } else {
                matrix[i][n - j - 1] = counter;
            }
        }
    }
    for (int i = 0; i < m; ++i)
    {
        for (int j = 0; j < n; ++j)
        {
            std::cout << matrix[i][j] << "    ";
        }
        std::cout << "\n";
    }

    for (int i = 0; i < n; ++i)
            delete[] matrix[i];
    delete[] matrix;
    return 0;
}
