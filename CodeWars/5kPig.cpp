#include <string>

bool isAlpha(char s)
{
    if (s >= 'A' && s <= 'Z' || s >= 'a' && s <= 'z')
    {
        return true;
    }
    return false;
}

std::string pig_it(std::string str)
{
    std::string letter = "";
    bool word = false;
    
    for (int i = 0; i < str.length(); i++) {
      if (!isAlpha(str[i])) {
        if(word == true) {
          word = false;
          str.insert(i, letter + "ay");
          i+=3;
        }
      } else if (word == false) {
        word = true;
        letter = str[i];
        str.erase(i, 1);
        i--;
      }
    }
    if (word)
    {
        return str+letter+"ay";
    }
    return str;
}
