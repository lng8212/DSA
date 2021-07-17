#pragma once
#include<bits/stdc++.h>
#include  "Pos.h"
#include "Member.h"
using namespace std;
struct Pair {
    Pos name1;
    int day;
};
class Assignment {
private:
    Member x;
    vector<Pair> t;
public:
    Assignment();
    Assignment(Member x, vector<Pair> t);

    void setMember(Member x);
    void setNumJob(vector<Pair> t);
    Member getMember();
    vector<Pair> getNumJob();
    bool checkNum();
};