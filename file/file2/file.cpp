#include <iostream>
#include <fstream>
#include <iomanip>
#include <string>

int main()
{
    std::ifstream file("in.txt");
    std::ofstream out;
    out.open("out.txt");
    std::string line;
    std::string strOut = ""; 

    unsigned char c;
    int counter = 0;
    int globalCounter = 0;

    // std::cout << file.get() << std::endl;
    //Читаем посимвольно
    while (getline(file, line)) 
    {
        while ((c = file.get()) != (unsigned char)EOF)
        {
            
            if (counter == 0) 
            {
                //Работа с первым столбцом
                out << std::setfill('0') << std::setw(10) << std::hex << 16 * globalCounter << ": ";
            }

            //Если код символа больше или равен 32
            if (c >= 32)
            {
                //Записали в temp для последнего столбца
                strOut += c;

                // out << std::setfill('0') << std::setw(2) << std::hex << (unsigned int)c << " ";
                out << std::hex << (unsigned int)c << " ";
            }
            else
            {
                strOut += c;
                out << " . ";
            }
            counter++;
            // после 8 кода ставим |
            if (counter == 8)
                out << " |  ";
            else if (counter == 15) {
                //out исходной строки
                out << "  " + strOut;
                out << '\n';

                counter = 0;
                strOut = "";
                globalCounter++;
            }
        }
    }
    // if (counter != 0) {
    //     while (counter < 15)
    //     {
    //         out << "  ";
    //         if (counter == 7)
    //             out << " |  ";

    //         counter++;
    //     }
    //     out << "  " + strOut;
    //     out << '\n';
    // }
    return 0;
}
