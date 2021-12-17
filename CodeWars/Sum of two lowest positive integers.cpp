#include <vector>

long sumTwoSmallestNumbers(std::vector<int> numbers)
{
    long long l1, l2;
    if(numbers[0] > numbers[1])
    {
      l1 = numbers[0];
      l2 = numbers[1];
    }
    else
    {
      l1 = numbers[1];
      l2 = numbers[0];
    }
    
    for(int i = 2; i < numbers.size(); ++i)
    {
      if (numbers[i] < l1 && numbers[i] < l2)
      {
        l1 = l2;
        l2 = numbers[i];
      }
      else if(numbers[i] < l1)
      {
        l1 = numbers[i];
      }
    }
  return l1 + l2;
}
