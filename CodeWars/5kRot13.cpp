#include <string>


std::string rot13(std::string msg)
{
    std::string ualph = "ABCDEFGHIJKLMNOPQRSTUVWXYZABCDEFGHIJKLMNOPQRSTUVWXYZ";
    std::string alph =
    "abcdefghijklmnopqrstuvwxyzabcdefghijklmnopqrstuvwxyz";


    std::string result = "";

    for(int i = 0; i < msg.length(); ++i)
    {
        if (alph.find(msg[i]) != std::string::npos)
        {
            result += alph[alph.find(msg[i]) + 13];
        }
        else if (ualph.find(msg[i]) != std::string::npos)
        {
            result += ualph[ualph.find(msg[i]) + 13];
        }
        else{
            result += msg[i];
        }
    }
    return result;
}
