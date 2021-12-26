#include <iostream>

//Функцию украл... признаюсь :)
int getRandomNumber(int min, int max)
{
    static const double fraction = 1.0 / (static_cast<double>(RAND_MAX) + 1.0); 
    return static_cast<int>(rand() * fraction * (max - min + 1) + min);
}

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
            matrix[i][j] = getRandomNumber(0, 100000);
        }
    }


    for (int i = 0; i < m; ++i)
    {
        for (int j = 0; j < n; ++j)
        {
            std::cout << matrix[i][j] << "\t" << "\t";
            
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
