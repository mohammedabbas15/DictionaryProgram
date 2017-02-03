//\begin{sourcecode}
#include "lab1.h"

bool loadDictionary(std::string f, std::vector<Entry>& d)
{
    std::ifstream ifs(f);
    if(not ifs) return false;
    std::string s, w, t;
    getline(ifs, s);
    std::cout << s << std::endl;
    while(ifs >> w >> t)
    {
        Entry e; e.word = w; e.translation = t;
        d.push_back(e);
        }
        std::cout <<"there are "<< d.size()<< " in your dictionary" << std::endl;
    return true;
}
//\end{sourcecode}

