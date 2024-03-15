//
// Created by Duru Irmak Öztürk on 15.03.2024.
//

#ifndef UNTITLED_STRONGSHIP2_H
#define UNTITLED_STRONGSHIP2_H
#include "spaceships.h"

class strongShip: Spaceships{
public:
    strongShip():Spaceships(0.5){}

    int updateHealthDamage30(int& _health) override;
    int updateHealthDamage10(int& _health) override;
    void asteroid() override;
    void run() override;
    void fight() override;

private:
protected:

};

#endif //UNTITLED_STRONGSHIP2_H
