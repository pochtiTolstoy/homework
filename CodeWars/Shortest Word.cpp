#include <string>
int find_short(std::string str)
{
  int min = 100000000;
  int counter = 0;
  for(int i = 0; i < str.length(); ++i)
  {
    if (str[i] == ' ')
    {
      if (counter != 0 && counter < min)
      min = counter;
      counter = 0;
    }
    else if (i==str.length()-1)
    {
      counter++;
      if (counter < min)
      {
        min = counter;
        counter = 0;
      }
    }
    else
    {
      counter++;
    }
    
  }
  return min;
}
