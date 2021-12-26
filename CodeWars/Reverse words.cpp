#include <iostream>
#include <string>

//Получился монстр :)

void sw(char& e1, char& e2)
{
    char tmp = e1;
    e1 = e2;
    e2 = tmp;
}

std::string reverse_words(std::string str)
{
    int len = str.length();
    int prevSpaceInd = 0;
    int newSpaceInd = 0;
    int strInd = 0;

    while(newSpaceInd != len-1)
    {
        
        while( str[prevSpaceInd] == ' ') ++prevSpaceInd;
        if (prevSpaceInd == len) break;

//         std::cout << prevSpaceInd << std::endl; 

        for (int i = prevSpaceInd; i < len; ++i)
        {
            if (str[i] == ' ')
            {
                newSpaceInd=i-1;
                break;
            }
            if (i == len-1)
            {
                newSpaceInd=i;
                break;
            }
        }

//         std::cout << newSpaceInd << std::endl;

        // if (newSpaceInd - 1 != prevSpaceInd) {
            for (int j = prevSpaceInd; j <= prevSpaceInd + (newSpaceInd-prevSpaceInd)/2; ++j)
            {
                sw(str[j], str[newSpaceInd-(j-prevSpaceInd)]);
            }
        // }
        prevSpaceInd = newSpaceInd+1;   
//         std::cout << str << std::endl;
        
    }
    return str;
}
