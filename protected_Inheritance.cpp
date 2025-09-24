#include <iostream>
using namespace std;

class Auto {
protected:
    string make = "Ford";
    void showColor() {
        cout << "Red!\n";
    }
};

class Sedan : protected Auto {
public:
    string model = "Mustang";

    void showInfo() {
        showColor();
        cout << make + " " + model << endl;
    }
};

class SportsSedan : public Sedan {
public:
    void showSportsInfo() {
        showColor();
        cout << make + " " + model << " [Sports Edition]" << endl;
    }
};

int main() {
    Sedan mySedan;
    mySedan.showInfo();

    SportsSedan sSedan;
    sSedan.showSportsInfo();

    /* Not allowed due to protected inheritance
    mySedan.showColor();
    cout << mySedan.make;
    */
    return 0;
}
