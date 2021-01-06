//
// Created by Derek Lin on 10/30/19.
//

#include "reverseMap.h"
//#include "helper.h"

void reverse(map<string,int> &m, multimap<int,string , classcomp> &res){ // function for reversing the map "flipping the map"
    /*
      +--------------------------------------+
      |             Reverse map              |
      +--------------------------------------+
    */
    map<string,int>::iterator it;
    for(it = m.begin() ; it != m.end() ; it++){ // iterates through the beginning of the beginning of the main m to the end
        string first = it->first;
        int second = it->second;
        res.insert(std::pair<int,string>(second,first));
    }
}