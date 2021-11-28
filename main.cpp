#include <iostream>
using std::string;
using std::cout;
using std::endl;


class Employee {
public:
    string Name;
    string Company;
    int Age;

    void IntroduceSelf(){
        cout  <<"Name - " << Name << endl;
        cout  <<"Company - " << Company << endl;
        cout  <<"Age - " << Age << endl;
    }
};

int main() {
    Employee employee1;
    employee1.Name = "Ayuba";
    employee1.Company = "MonnieTech";
    employee1.Age = 30;
    employee1.IntroduceSelf();



}
