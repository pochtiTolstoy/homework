std::string reverse(std::string s)
{   
    std::string rev = "";
    for (int i=0; i < s.length(); ++i)
    {
        rev += s[s.length()-1-i];
    }
    return rev;
}

std::string reverse_words(std::string str)
{
  std::string temp = "";
  std::string ans = "";
  for (int i = 0; i < str.length(); ++i)
  {
      if (str[i] != ' ')
      {
          temp+=str[i];
      }
      else
      {
          ans += reverse(temp) + ' ';
          temp = "";
      }
  }
  ans += reverse(temp);
  return ans;
}
