#pragma once

#include<bits/stdc++.h>
#include "People.h"
using namespace std;

class Member : public People {
private:
    static int codeMember;
    int salary;
public:
    friend class Assignment;
    Member();
    int a;

    void setSalary(int salary);
    int getSalary();
    int getCodeMember();
};
