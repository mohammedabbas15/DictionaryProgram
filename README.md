# DictionaryProgram
A dictionary program that can read a .DAT file and output the translation
lab.h
The header file will:
include any library files needed such as
vector, fstream, and iostream
create a struct named ENTRY with the string fields word and translation
declare the prototypes of each function used in program


main.cpp
Create variables to hold the vector, the word input by user
the translation to be looked up, and boolean variables
to hold the values returned by loadDictionary and foundWord
functions
Load the dictionary from the file
exit if loadDictionary returns false
While the user is not finished entering words...
Prompt for word and store it
If it is “q”, then quit program
Else lookup word in vector and display translation


loadDictionary.cpp
Reads dictionary entries from a file. Returns true if successful, false if cannot
open the file.
Open dictionary file
Read and display the header line
Store rest of words and translations in vector of ENTRY objects
Display the number of entries


foundWord.cpp
Finds a word in the dictionary.
dict – the dictionary array
word – word to translate
translation – returned translation from the dictionary.
This is returned in the parameter passed in by reference
Returns true if the word has been found, false otherwise.
