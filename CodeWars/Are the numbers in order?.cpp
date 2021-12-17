bool isAscOrder(std::vector<int> arr)
{
  int l = arr.size();
  for(int i = 0; i < l-1; ++i)
  {
    if(arr[i+1]-arr[i]<0)
    {
      return false;
    }
  }
  return true;
}
