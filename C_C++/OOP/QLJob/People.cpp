#include "People.h"

    //People::People() {}
    People::People(string name, string address, string teleNumber) {
        this->name = name;
        this->address = address;
        this->teleNumber = teleNumber;
    }
    void People::setName(string name) {
        this->name = name;
    }
    void People::setAddress(string address) {
        this->address = address;
    }
    void People::setTeleNumber(string teleNumber) {
        this->teleNumber = teleNumber;
    }
    string People::getName() {
        return name;
    }
    string People::getAddress() {
        return address;
    }
    string People::getTeleNumber() {
        return teleNumber;
    }