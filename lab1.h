//\begin{sourcecode}
#include <iostream>
#include <fstream>
#include <string>
#include <vector>

struct Entry {
    std::string word;
    std::string translation;
    };
bool loadDictionary(std::string, std::vector<Entry>&);
bool foundWord(std::string, const std::vector<Entry>&, std::string &);

//\end{sourcecode}

