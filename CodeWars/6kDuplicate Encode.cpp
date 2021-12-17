#include <string>

std::string duplicate_encoder(const std::string& word){
  std::string temp = "";
  for (int i = 0; i < word.size(); ++i)
  {
    temp += tolower(word[i]);
  }
  std::string ans = "";
  for (int i = 0; i < temp.size(); ++i)
  {
    if (temp.find(temp[i])==temp.rfind(temp[i]))
    {
      ans += '(';
    }
    else
    {
      ans += ')';
    }
  }
  return ans;
}
