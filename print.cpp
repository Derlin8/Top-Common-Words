//
// Created by Derek Lin on 10/30/19.
//

#include "print.h"
void print(multimap<int,string,classcomp> &m , int n){
    int previous = 0;
    int numCounter = 1;
    for( auto s  : m){
        if(n == 0 ) break; // no words to be found
        if(s.first == previous) continue;
        n--; // decrement the for loop by 1
        if(m.count(s.first) == 1){
            cout << numCounter << ".) These words appeared "
                 << s.first << " times: {"
                 << s.second << "}" << endl; // outputs data for the first and second amount of times the words appeared
            numCounter++; // increment numCounter by 1
            previous = s.first; // sets the first word to equal the previous
            continue;
        }
        auto walker = m.equal_range(s.first);
        for (auto itr = walker.first; itr != walker.second; ++itr){ // increments the for loop for all elements of walker.first
            if(itr == walker.first)
                cout << numCounter << ".) These words appeared " << itr->first << " times: {" << itr->second;
            else
                cout << ", " << itr->second;
        }
        cout << "}" << endl;
        numCounter++;
        previous = s.first; // sets the previous equal to the first
    }
}