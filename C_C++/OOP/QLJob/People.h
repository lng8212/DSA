#pragma once
#include<bits/stdc++.h>
using namespace std;

class People {
protected:
    string name;
    string address;
    string teleNumber;
public:
    People() {}
    People(string name, string address, string teleNumber);
    void setName(string name);
  
    void setAddress(string address);
    void setTeleNumber(string teleNumber);
    string getName();
    string getAddress();
    string getTeleNumber();
};