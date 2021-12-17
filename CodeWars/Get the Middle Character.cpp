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
