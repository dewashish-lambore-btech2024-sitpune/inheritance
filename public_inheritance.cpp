#include <iostream>
using namespace std;

class Auto {
public:
    string make = "Ford";
    void showColor() {
        cout << "Red!\n";
    }
};

class Sedan : public Auto {
public:
    string type = "Mustang";
};

int main() {
    Sedan s;
    cout << "Brand: " << s.make << endl;
    cout << "Model: " << s.type << endl;
    cout << "Color: "; s.showColor();
    return 0;
}
