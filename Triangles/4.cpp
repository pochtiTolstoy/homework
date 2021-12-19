#include <iostream>

void solution3() {
    // Задача 3. Вывести ромб из зведочек.
    int height, num;
    std::cout << "Введите высоту и кол-во: ";
    std::cin >> height >> num;
    // Считаем количество позиций в строке
    int cell = 2*height-1;
    // Количество пробелов строке
    int spaceN = cell - 1;
    int temp;
    // Высота ромба
    int realHeight = cell;

    for (int i = 0; i < realHeight; ++i) {
        // Кол-во символов *
        temp = cell - spaceN;
        // std::cout << i << temp;
        for (int position = 0; position < num; ++position)
        {
            for (int n1 = 0; n1 < spaceN/2; ++n1) {
                std::cout << ' ';
            }
            for (int s = 0; s < temp; ++s) {
                std::cout << '*';
            }
            for (int n2 = 0; n2 < spaceN/2; ++n2) {
                std::cout << ' ';
            }
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
    
    solution3();
    
    return 0;
}