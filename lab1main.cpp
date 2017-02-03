//\begin{sourcecode}
#include "lab1.h"

int main()
{
    bool ok, found;
    std::string translation;
    std::string input;
    std::vector<Entry> dict;
    ok = loadDictionary("dict.dat", dict);
        
    if(not ok) std:: cout << "dont have it!" << std::endl;
   std::cout << "#####################################" << std::endl;
   std::cout << "-------------------------------------" << std::endl;
   std::cout << "Dictionary.cpp was written by: Mohammed Abbas" << std::endl;
   std::cout << "under David Topham in CS-124 version: 1.0" << std::endl;
   std::cout << "There are " << "words" << " words in this dictionary" << std::endl;
   std::cout << "*To quit Dictionary, please hit q*" << std::endl;
   std::cout << "-------------------------------------" << std::endl;
   std::cout << "#####################################" << std::endl;
   std::cout << "Please enter a word to translate: " << std::endl;

   while(input != "q")
   {
    getline(std::cin, input);
    found = foundWord(input,dict,translation);
    if(found)
        {
            std::cout << "The translation is: ";
            std::cout << translation << std::endl;}
    else {std::cout << "not a word in the dictionary..";}
    }
}
//\end{sourcecode} 

