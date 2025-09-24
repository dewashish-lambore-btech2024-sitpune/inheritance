#include <iostream>
using namespace std;

class Device {
public:
    int cost;

    void setCost() {
        cout << "Enter cost: ";
        cin >> cost;
        cout << "Cost: " << cost << "\n";
    }

    void describe() {
        cout << "This is the base class" << "\n";
    }
};

class Washer : public Device {
public:
    void describe() {
        cout << "Used to wash clothes" << "\n";
    }
};

class Oven : public Device {
public:
    void describe() {
        cout << "Used to cook food" << "\n";
    }
};

int main() {
    Washer w;
    cout << "---Setting cost for Washer---\n";
    w.setCost();
    cout << "---Washer description---\n";
    w.describe();
    cout << "---Base class description---\n";
    w.Device::describe();

    Oven o;
    cout << "---Setting cost for Oven---\n";
    o.setCost();
    cout << "---Oven description---\n";
    o.describe();
    cout << "---Base class description---\n";
    o.Device::describe();

    return 0;
}
