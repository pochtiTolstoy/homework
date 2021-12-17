#include <cmath>

bool is_square(int n)
{
  for (int i = 0; i < sqrt(n)+1; ++i)
  {
    if (i*i==n) return true;
  }
  return false;
}

// bool is_square(int n) {
//   if (n < 0) return false;
//   int square = sqrt(n);
//   return square * square == n;
// }
//loop doesn't make sense
