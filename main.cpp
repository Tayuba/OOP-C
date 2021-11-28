#include <iostream>
using std::string;
using std::cout;
using std::endl;

// Create class
class Employee {
// make class public
public:
    string Name;
    string Company;
    int Age;

// Create a function in the class
    void IntroduceSelf(){
        cout  <<"Name - " << Name << endl;
        cout  <<"Company - " << Company << endl;
        cout  <<"Age - " << Age << endl;
    }

// Create a Constructor
    Employee(string name, string company, int age){
        Name = name;
        Company = company;
        Age = age;
    }

};

int main() {
    Employee employee1 = Employee("Ayuba", "MonnieTech", 30);
    employee1.IntroduceSelf();

    Employee employee2  = Employee("Tahiru", "MonnieTechNow", 35);
    employee2.IntroduceSelf();


}
