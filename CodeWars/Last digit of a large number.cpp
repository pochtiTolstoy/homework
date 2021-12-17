#include <string>
#include <iostream>
int lenCycle(int lastDigit)
{
        switch(lastDigit)
    {
        case 0:
            return 1;
            break;
        case 1:
            return 1;
            break;
        case 2:
            return 4;
            break;
        case 3:
            return 4;
            break;
        case 4:
            return 2;
            break;
        case 5:
            return 1;
            break;
        case 6:
            return 1;
            break;
        case 7:
            return 4;
            break;
        case 8:
            return 4;
            break;
        case 9:
            return 2;
            break;
        default:
        break;
    }
}

int last_digit(const std::string &str1, const std::string &str2) {
  long a = std::stol(str1, nullptr, 10);
  long b = std::stol(str2, nullptr, 10);
  if (b==0 || (a == 0 && b == 0)) return 1;
  int lastDigit = a % 10;
  int len = lenCycle(lastDigit);
  int p = b % len;
  if (p == 0) p = len;
  int ans = 1;
  for (int i = 0; i < p; ++i)
  {
      ans *= a;
  }
  return ans % 10;
}
