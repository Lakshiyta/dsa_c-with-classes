//CAR PARKING PROJECT
//pass 3 libraries(iostream, string, vector). above main, create the class Car write the private properties string liencePlate & owner.
// create the constructor pass 2 parameter licencePlate & owner
//now write getter and setter method(private variable). now, write 4 function in which 2 for setter and 2 for getter.
//create new class name as ParkingLot
#include <iostream>
#include <string>
#include <vector>
using namespace std;

class Car {
private:
    string licensePlate;
    string owner;

public:
    // Constructor
    Car(const string& plate, const string& ownerName) {
        licensePlate = plate;
        owner = ownerName;
    }
    // Getter methods
    string getLicensePlate() const {
        return licensePlate;
    }
    string getOwner() const {
        return owner;
    }
    // Setter methods
    void setLicensePlate(const string& plate) {
        licensePlate = plate;
    }
    void setOwner(const string& ownerName) {
        owner = ownerName;
    }
    // Display method
    void displayCarInfo() const {
        cout << "License Plate: " << licensePlate << endl;
        cout << "Owner: " << owner << endl;
    }
};

class ParkingLot {
private:
    vector<Car> parkedCars;
    int capacity; 

public:
    ParkingLot(int cap) : capacity(cap) {}

    bool parkCar(const Car& car) {
        if (parkedCars.size() < capacity) {
            parkedCars.push_back(car);
            return true;
        } else {
            cout << "Parking lot is full" << endl;
            return false;
        }
    }
    // Display method
    void displayParkedCars() const { 
        cout << "Parked Cars: \n";
        for (const auto& car : parkedCars) {
            car.displayCarInfo(); 
        }
    }
};

int main() {
    ParkingLot myParkingLot(3);
    Car car1("BC123", "Sanjay Gore");
    Car car2("YZ457", "Janvi Manse");

    myParkingLot.parkCar(car1);
    myParkingLot.parkCar(car2);
    myParkingLot.displayParkedCars();

    return 0;
}
