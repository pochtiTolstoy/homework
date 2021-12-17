#include <cmath>

bool is_square(int n)
{
  for (int i = 0; i < sqrt(n)+1; ++i)
  {
    if (i*i==n) return true;
  }
  return false;
}
