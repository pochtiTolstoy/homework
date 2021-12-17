#include <vector>

int maxSequence(const std::vector<int>& arr){
  int curr = 0;
  int global_max = 0;
  for (int i = 0; i < arr.size(); ++i)
  {
    curr = std::max(0, curr + arr[i]);
    if (curr > global_max)
    {
      global_max = curr;
    }
  }
  return global_max;
}
