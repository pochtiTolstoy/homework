#include <string>

std::string DNAStrand(const std::string& dna)
{
  std::string ans = "";
  for (int i = 0; i < dna.length(); ++i)
  {
    if (dna[i]=='A') ans += 'T';
    else if (dna[i]=='T') ans += 'A';
    else if (dna[i]=='G') ans += 'C';
    else ans += 'G';
  }
  return ans;
}
