bool is_isogram(std::string str) {
  std::string temp = "";
  for (int i = 0; i < str.length(); ++i)
  {
      for (int j = 0; j < temp.length(); ++j)
      {
          if (tolower(str[i]) == tolower(temp[j]))
          {
              return false;
          }
      }
      temp += str[i];
  }
  return true;
}
