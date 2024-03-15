#include <iostream>
#include "events.h"
#include "spaceships.h"
#include <cstdlib>
#include "shipfleetmanager.h"
#include "speedship.h"
#include "strongship2.h"
#include "commonship2.h"

int main() {

    srand(time(0));
    std::shared_ptr<Spaceships>secilen_gemi;
    Events::start_game();
    ShipFleetManager attackFleet;
    strongShip KAAN;
    attackFleet.addShip(&KAAN);
    attackFleet.displayAllSpaceshipStatus();

    return 0;
}

