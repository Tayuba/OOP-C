#include <iostream>
using std::string;
using std::cout;
using std::endl;

// Create class
class Employee {
// Encapsulate
private:
    string Name;
    string Company;
    int Age;
// make class public
public:
    void  setName(string name){
        Name = name;
    }
    string getName(){
        return Name;
    }

    void  setCompany(string company){
        Company = company;
    }
    string getCompany(){
        return Company;
    }

    void setAge(int age){
        if(age  >=18)
        Age = age;
    }
    int getAge(){
        return Age;
    }
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

    employee1.setAge(18);
    cout << employee1.getName() << " is " << employee1.getAge() << " years old" << endl;


}
