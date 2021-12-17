std::string get_middle(std::string input) 
{
  std::string sum = "";
  int n = input.length();
  if(n%2==0)
  {
    sum += input[n/2-1];
    sum += input[n/2];
    return sum;
  }
  sum += input[n/2];
  return sum;
}

// std::string get_middle(std::string input) 
// {
//   int i = input.length();

//   if ((i % 2) == 0) 
//     return input.substr(i/2 - 1, 2);
    
//   else
//     return input.substr(i/2, 1);
// }
