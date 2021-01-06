//
// Created by Derek Lin on 10/30/19.
//

#include "process.h"




void process(char * fileName  , map<string,int> &m ){


  // Reads file and adds to map
    string word;
    ifstream filestr (fileName); //declare stream variable name
    // if (filestr.is_open()) {
    while (filestr >> word) { //if not at end of file, continue reading
        int ptr = 0;
        for(unsigned int i = 0; i < word.size(); ++i)
        {
            if (((word[i] >= 'a' && word[i]<='z') || (word[i] >= 'A' && word[i]<='Z') || (i != 0 && word[i] == '\'') || isdigit(word[i])))
            {
                word[ptr] = tolower(word[i]);
                ptr++;
            }
        }
        if(word[ptr-1] == '\'') ptr--;
        string strippedWord = word.substr(0,ptr);
        //a, an, and, in, is, it, the
        if(strippedWord == "a" ||
           strippedWord == "an" ||
           strippedWord == "and" ||
           strippedWord == "in" ||
           strippedWord == "is" ||
           strippedWord == "it" ||
           strippedWord == "the" ||
           strippedWord == "" ) continue;
        auto res = m.find(strippedWord);
        if( res != m.end() ){ //Update
            res->second = res->second + 1;
        }
        else { //Insert New
            m.insert(std::pair<string,int>(strippedWord,1));
        }
    }
    filestr.close();

}