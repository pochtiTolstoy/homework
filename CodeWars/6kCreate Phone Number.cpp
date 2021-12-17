#include <string>

std::string createPhoneNumber(const int arr [10]){
  std::string ans = "(";
  for(int i = 0; i < 10; ++i)
  {
    ans +=std::to_string(arr[i]);
    if (i==2)
    {
      ans += ") ";
    }
    if (i == 5)
    {
      ans += '-';
    }
  }
  return ans;
}
