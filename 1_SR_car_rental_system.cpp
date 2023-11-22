#include <iostream>
#include <string>

using namespace std;

class Car {
private:
    string make;
    string model;
    bool rented;

public:
    Car(const string& carMake, const string& carModel)
        : make(carMake), model(carModel), rented(false) {}

    void RentCar() {
        if (!rented) {
            rented = true;
        }
    }

    void ReturnCar() {
        if (rented) {
            rented = false;
        }
    }

    bool IsRented() {
        return rented;
    }
};

int main() {
    Car car("Toyota", "Camry");
    car.RentCar();
    cout << "Car rental status: " << car.IsRented() << endl;

    car.ReturnCar();
    cout << "Car rental status: " << car.IsRented() << endl;
    return 0;
}
