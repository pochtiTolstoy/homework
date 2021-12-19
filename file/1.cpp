#include <iostream>
#include <fstream>
#include <string>

int main()
{
    std::string temp = "";
    std::ifstream file("in.txt");
    std::string line;
    int counter = 0;
    std::ofstream out;
    out.open("out.txt");

    while (getline(file, line))
    {

        for (int symb = 0; symb < line.length(); ++symb)
        {
            temp += line[symb];
            if (temp == "$$" && counter % 2 == 0)
            {
                counter++;
                temp = "";
                out << "<math>";
            }
            else if (temp == "$$")
            {
                counter++;
                temp = "";
                out << "<\\math>";
            }
            else if (temp != "$")
            {
                out << temp;
                temp = "";
            }
        }
        out << '\n';
    }
    

    return 0;
}
