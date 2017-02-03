//\begin{sourcecode}
#include "lab1.h"
bool foundWord(std::string s, 
              const std::vector<Entry>& d,
              std::string &t)
{
    for(Entry e : d)
    {
        if(e.word == s)
        {
            t = e.translation;
            return true;
        }
    }
    return false;
    }
//\end{sourcecode}
