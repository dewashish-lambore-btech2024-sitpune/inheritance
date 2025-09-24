#include <iostream>
using namespace std;

class Transport {
public:
    void identify() { cout << "I am a Transport\n"; }
};

class Automobile : public Transport {
public:
    void identifyAuto() { cout << "I am an Automobile\n"; }
};

class ElectricAutomobile : public Automobile {
public:
    void identifyElectric() { cout << "I am an Electric Automobile\n"; }
};

int main() {
    ElectricAutomobile ea;
    ea.identify();          // from Transport
    ea.identifyAuto();      // from Automobile
    ea.identifyElectric();  // from ElectricAutomobile
    return 0;
}
