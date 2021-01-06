#pragma once
/*
 once is a non-standard but widely supported preprocessor directive designed to cause the
 current source file to be included only once in a single compilation
*/
#include <iostream>
#include <fstream>
#include <string>
#include <map>
#include <iterator>
#include <cctype>
#include <vector>
#include <sstream>

using namespace std;

// declares maps
// By default, a map will sort the values in ascending order.
void print(multimap<int,string,bool* > &m , int n);
void reverse(multimap<string,int> &m , multimap<int,string,bool* > &res);
void process(char * fileName , map<string,int> &m );
void topN(char * path, int n);

struct classcomp {
    bool operator() (  const int& lhs,  const int& rhs ) const;
};














