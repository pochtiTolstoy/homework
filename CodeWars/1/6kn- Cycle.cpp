int cycle(int n) {
  if (n % 2 == 0 || n % 5 == 0)
  {
    return -1;
  }
  int i = 0;
  int mod = 1;
  while (true)
  {
    mod = mod * 10 % n; 
    i++;
    if (mod == 1) return i;
  }
}
