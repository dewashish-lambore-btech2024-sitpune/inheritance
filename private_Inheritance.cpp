#include <iostream>
#include <string>
using namespace std;

class Human {
protected:
    string fullName;
    int age;
public:
    void setDetails(string n, int a) {
        fullName = n;
        age = a;
    }

    void displayDetails() {
        cout << "Name: " << fullName << ", Age: " << age << endl;
    }
};

class Learner : private Human {
    int studentID;
public:
    void setLearner(string n, int a, int id) {
        setDetails(n, a);
        studentID = id;
    }

    void showLearner() {
        displayDetails();
        cout << "Student ID: " << studentID << endl;
    }
};

int main() {
    Learner l;
    l.setLearner("Ankit", 20, 101);
    l.showLearner();

    /* Not allowed due to private inheritance
    l.setDetails("Ravi", 25);
    l.displayDetails();
    */
    return 0;
}
