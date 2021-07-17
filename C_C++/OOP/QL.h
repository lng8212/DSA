#include<bits/stdc++.h>
#include "Bandoc.h"
#include "Sach.h"
using namespace std;

struct Pair {
    Sach s;
    int slsach;
};

class QL {
    private:
    Bandoc a;
    vector<Pair> b;
    public:
    QL(){
    
    }
    QL (Bandoc a, vector<Pair> b){
        this ->a=a;
        this ->b=b;
    }
    void setBd(Bandoc c){
        a=c;
    }
    Bandoc getBd (){
        return a;
    }
    void setSls(vector<Pair> b){
        this -> b=b;
    }
    vector < Pair> getSls(){
        return b;
    }
    bool checkDausach(){
        if (b.size()>5) return false;
        else return true;
    }
    bool checkSls (){
        for (int i=0;i<b.size();i++){
            if (b[i].slsach>3) return false;
        }
        return true;
    }
};