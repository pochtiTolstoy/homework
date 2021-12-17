bool XO(const std::string& str)
{
  int x = 0;
  int o = 0;
  for(int i = 0; i < str.length(); ++i)
  {
    if (str[i]=='o' || str[i]=='O')
    {
      o += 1;
    }
    else if (str[i]=='x' || str[i]=='X')
    {
      x += 1;
    }
  }
  if (x==o)
  {
    return true;
  }
  return false;
}
