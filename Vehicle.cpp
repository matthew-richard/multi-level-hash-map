#include "Vehicle.h"

using std::getline;

Vehicle Vehicle::menu_constructor() {
    cout << endl;
    int year = acceptInRange<int>("year", 2000, 2014);
    double mileage = acceptPositive<double>("mileage");
    string color = "";
    
    cout << "color?: ";
    getline(cin, color);

    return Vehicle(year, color, mileage);
}

ostream& Vehicle::print(ostream& out) const {
    out << "*" << type << "*"
        << " / year: " << year
        << " / color: " << color
        << " / mileage: " << mileage << " miles"
        << endl;
    return out;
}

ostream &operator<<(ostream& out, const Vehicle &v) {
    v.print(out);
    return out;
}

