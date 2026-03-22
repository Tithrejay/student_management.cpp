#include <iostream>
#include <string>
using namespace std;

class Student {
private:
    int id;
    string name;
    float marks;

public:
    // Constructor
    Student(int i, string n, float m) {
        id = i;
        name = n;
        marks = m;
    }

    // Display function
    void display() {
        cout << "ID: " << id << endl;
        cout << "Name: " << name << endl;
        cout << "Marks: " << marks << endl;
        cout << "----------------------" << endl;
    }
};

int main() {
    int n;

    cout << "Enter number of students: ";
    cin >> n;

    // Dynamic memory allocation
    Student* students = new Student*[n];

    int id;
    string name;
    float marks;

    for (int i = 0; i < n; i++) {
        cout << "\nEnter details for student " << i + 1 << endl;

        cout << "ID: ";
        cin >> id;

        cout << "Name: ";
        cin >> name;

        cout << "Marks: ";
        cin >> marks;

        students[i] = new Student(id, name, marks);
    }

    cout << "\n--- Student Records ---\n";

    for (int i = 0; i < n; i++) {
        students[i]->display();
    }

    // Free memory
    for (int i = 0; i < n; i++) {
        delete students[i];
    }
    delete[] students;

    return 0;
}
