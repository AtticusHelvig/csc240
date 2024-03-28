#include "car.h"

Car gm3("Global Model 3");

int main() {
    static Car lsmy("Local Static Model Y");
    Car lamx("Local Automatic Model X");
    Car* hms = new Car("Heap Model S");

    gm3.addTrip(69);
    gm3.addTrip(420);
    lsmy.addTrip(480);
    lsmy.addTrip(851);
    lsmy.addTrip(6905);
    lamx.addTrip(0xABC);
    lamx.addTrip(0b01010101);
    hms->addTrip(5318008);
    hms->addTrip(0xC0FFEE);

    delete hms;
}