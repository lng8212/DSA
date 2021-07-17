#include "Pos.h"

    Pos::Pos() {}
    Pos::Pos(string posName, int reward) {

        this->posName = posName;
        this->reward = reward;
    }
    void Pos::setPosName(string posName) {
        this->posName = posName;
    }
    void Pos::setReward(int reward) {
        this->reward = reward;
    }
    string Pos::getPosName() {
        return posName;
    }
    int Pos::getReward() {
        return reward;
    }
    int Pos::getPosCode() {
        z = posCode;
        posCode++;
        return z;
    }

int Pos::posCode = 100;