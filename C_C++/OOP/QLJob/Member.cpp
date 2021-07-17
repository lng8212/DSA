    //#pragma once
    #include "Member.h"
    //#include "People.h"


        Member::Member() {}
        void Member::setSalary(int salary) {
            this->salary = salary;
            a = codeMember;
            codeMember++;

        }
        int Member::getSalary() {
            return salary;
        }
        int Member::getCodeMember() {
            return a;
        }
    int Member::codeMember = 100;
