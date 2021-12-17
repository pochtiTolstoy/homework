std::vector<int> tribonacci(std::vector<int> signature, int n)
{
  std::vector<int> trib = signature;
  std::vector<int> result;
  for(int i = 3; i < n; ++i)
  {
    trib.push_back(trib[i-1] + trib[i-2] + trib[i-3]);
  }
  for (int i = 0; i < n; ++i)
  {
    result.push_back(trib[i]);
  }
  return result;
}
