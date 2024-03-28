#include <iostream>
#include <string>

class Car {
   private:
    long odometer;
    std::string name;

   public:
    Car(std::string name) {
        odometer = 0;
        this->name = name;
        std::cout << "Constructed the car: " << name << std::endl;
    }

    ~Car() {
        std::cout << "Destructed the car: " << name << " with " << odometer
                  << " miles." << std::endl;
    }

    std::string getName() { return name; }
    long getOdometer() { return odometer; }

    void addTrip(int mileage) {
        if (mileage > 0) {
            odometer += mileage;
        }
    }
};