#include "Assignment.h"
// #include  "Pos.h"
// #include "Member.h"

    Assignment::Assignment() {}
    Assignment::Assignment(Member x, vector<Pair> t) {
        this->x = x;
        this->t = t;
    }
    void Assignment::setMember(Member x) {
        this->x = x;
    }
    void Assignment::setNumJob(vector<Pair> t) {
        this->t = t;
    }
    Member Assignment::getMember() {
        return x;
    }
    vector<Pair>Assignment:: getNumJob() {
        return t;
    }
    bool Assignment::checkNum() {
        if (t.size() > 3) return false;
        return true;
    }
