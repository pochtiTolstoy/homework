#include <string>

bool isAnagram(std::string test, std::string original){
    int counter = 0;
    if (original.length() == test.length())
    {
        for (int i = 0; i < original.length(); ++i)
        {    
            for (int j = 0; j < test.length(); ++j)
            {
                if (tolower(original[i])==tolower(test[j]))
                {
                    counter += 1;
                    test[j] = '0';
                    break;
                }
            }
        }   
        if (counter == original.length())
        {
            return true;
            
        }
    }
    return false;
}
