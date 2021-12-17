static long findMissing(std::vector<long> list){
  int delt1 = list[1]-list[0];
  int delt2 = list[2]-list[1];
  int diff = 0;
  if (delt1 == delt2)
  {
    diff = delt1;
  }
  else if (std::abs(delt1) >std::abs(delt2))
  {
    return list[0]+delt2;
    //diff = delt1 / 2;
  }
  else
  {
    return list[1]+delt1;
  }
  for (int i = 0; i < list.size()-1; ++i)
  {
    if (std::abs(list[i]-list[i+1]) != std::abs(diff))
    {
      return list[i]+diff;
    }
  }
}
