int countSmileys(std::vector<std::string> arr)
{
    std::string str = "";
    int diff = 0;
    int counter = 0;
    //Output symb by symb
    for (int elem = 0; elem < arr.size(); ++elem)
    {
        str += arr[elem];
        for (int ind = 0; ind < str.length(); ++ind)
        {
            diff = str.length()-1 - ind;
            if (diff>0 && (str[ind]==';' || str[ind]==':'))
            {
                if (diff-1>=0 && (str[ind+1]=='-' || str[ind+1]=='~'))
                {
                    if (diff-2>= 0 && (str[ind+2]=='D' || str[ind+2]==')'))
                    {
                        counter++;
                    }

                }
                else if (diff-1>= 0 && (str[ind+1]=='D' || str[ind+1]==')'))
                {
                    counter++;
                }
            }
        }
        str = "";
        
    }
    return counter;
}
