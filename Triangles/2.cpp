#include <iostream>


void solution2() {
    // Задача 2. Вывести равнобедренный треугольник из звездочек. Высоту задает пользователь.
    int height;
    std::cout << "Введите число: ";
    std::cin >> height;
    // Считаем количество позиций в строке
    int cell = 2*height-1;
    // Количество пробелов строке
    int spaceN = cell - 1;
    int temp;
    
    for (int i = 0; i < height; ++i) {
        temp = cell - spaceN;
        for (int n1 = 0; n1 < spaceN/2; ++n1) {
            std::cout << ' ';
        }
        for (int s = 0; s < temp; ++s) {
            std::cout << '*';
        }
        for (int n2 = 0; n2 < spaceN/2; ++n2) {
            std::cout << ' ';
        }
        std::cout << "\n";
        spaceN -= 2;
        
    }
    // Плохое решение...
}

int main() {
    std::cout << "Hello!\n";
    solution2();
    return 0;
}
