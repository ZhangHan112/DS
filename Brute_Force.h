#ifndef __Brute_Force_H__
#define __Brute_Force_H__

#include<iostream>
#include<string>
#include<bitset>
#define dimension 100
using namespace std;

class brute_force{
public:
    bitset<dimension> startbits;
    bitset<dimension> goalbits;
    string s;
    int flag,max;
    brute_force();
    void run();
    
};

#endif