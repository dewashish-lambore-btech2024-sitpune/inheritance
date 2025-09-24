#include <iostream>
using namespace std;

class Personal {
public:
    string fullName;
    int age;

    void inputPersonal() {
        cout << "Enter full name and age: ";
        cin >> fullName >> age;
    }

    void showPersonal() {
        cout << "Name: " << fullName << "\n";
        cout << "Age: " << age << "\n";
    }
};

class Academic {
public:
    int studentID;
    float score;

    void inputAcademic() {
        cout << "Enter Student ID and score: ";
        cin >> studentID >> score;
    }

    void showAcademic() {
        cout << "Student ID: " << studentID << "\n";
        cout << "Score: " << score << "\n";
    }
};

class Learner : public Personal, public Academic {
public:
    void showDetails() {
        cout << "\n--- Learner Details ---\n";
        showPersonal();
        showAcademic();
    }
};

int main() {
    Learner l;
    l.inputPersonal();
    l.inputAcademic();
    l.showDetails();
    return 0;
}
