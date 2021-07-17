#pragma once
#include<bits/stdc++.h>
using namespace std;


class Pos {
private:
    static int posCode;
    string posName;
    int reward;
    int z;
public:
    friend class Assignment;
    Pos();
    Pos(string posName, int reward);
    void setPosName(string posName);

    void setReward(int reward);
    string getPosName();
    int getReward();
    int getPosCode();

};