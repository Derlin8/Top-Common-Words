#include "helper.h"

// function that will print the occurrence of the common words

void print(multimap<int,string,classcomp> &m, int n);
void reverse(map<string,int> &m, multimap<int,string , classcomp> &res){ // function for reversing the map "flipping the map"
    // Reverse Map
    map<string,int>::iterator it;
    for(it = m.begin() ; it != m.end() ; it++){ // iterates through the beginning of the beginning of the main m to the end
        string first = it->first;
        int second = it->second;
        res.insert(std::pair<int,string>(second,first));
    }
}
void process(char * fileName  , map<string,int> &m);
bool classcomp::operator() (const int& leftHandSide, const int& rightHandSide ) const{
    return leftHandSide > rightHandSide;
}
void topN(char * path , int n){

    map<string,int> occurCounter; // creates a map that will pair string and ints for incrementing occurrences
    multimap<int , string,classcomp > rev;

    process(path,occurCounter);
    reverse(occurCounter,rev);
    print(rev,n);

}


