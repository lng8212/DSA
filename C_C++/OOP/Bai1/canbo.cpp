#pragma once
#include<bits/stdc++.h>
using namespace std;


class canbo{
    protected:
    string hoten;
    int luongcb;
    public:
    canbo(){}
    void setHoten(string hoten){
        this->hoten = hoten;
    }
    void setLuongcb(int luongcb){
        this->luongcb=luongcb;
    }
    string getHoten(){
        return hoten;
    }
    int getLuongcb(){
        return luongcb;
    }

};