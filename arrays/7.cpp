#include <iostream>

int main()
{   
    int numUserRoom;
    std::cout << "Введите номер комнаты: ";
    std::cin >> numUserRoom;
    int tracker = 0;
    int incNumRooms = 0;
    int ansHeight = 0;
    while(++tracker)//for raws and cols
    {
        for (int height = 1; height <= tracker; ++height)
        {
            ansHeight++;
            for (int rooms = 1; rooms <= tracker; ++rooms)
            {
                incNumRooms++;
                if (incNumRooms == numUserRoom)
                {
                    std::cout << "Этаж: " << ansHeight << std::endl;
                    std::cout << "Комната: " << rooms << std::endl;
                    return 1;
                }
            }
        }
    }
    return 0;
}
