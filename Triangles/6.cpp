#include <iostream>


void solution3() {
    // Задача 3. Вывести ромб из зведочек.
    int height;
    std::cout << "Введите число: ";
    std::cin >> height;
    // Считаем количество позиций в строке
    int cell = 2*height-1;
    // Количество пробелов строке
    int spaceN = cell - 1;
    int temp;
    // Высота ромба
    int realHeight = cell;
    int counterInLine = 0;
    for (int i = 0; i < realHeight; ++i) {
        // Кол-во символов *
        temp = cell - spaceN;
        // std::cout << i << temp;
        counterInLine = 0;
        for (int n1 = 0; n1 < spaceN/2; ++n1) {
            std::cout << ' ';
        }
        for (int s = 0; s < temp; ++s) {
            counterInLine++;
            if (s + 1 == temp || s == 0)
            {
               std::cout << '*'; 
            } 
            else
            {
                std::cout << ' ';
            }
        }
        for (int n2 = 0; n2 < spaceN/2; ++n2) {
            std::cout << ' ';
        }
        std::cout << "\n";
        // 
        if (i < height-1) {
            spaceN -= 2;
        }
        else {
            spaceN += 2;
        }

    }
}

int main() {
    std::cout << "Hello!\n";
    solution3();
    return 0;
}
