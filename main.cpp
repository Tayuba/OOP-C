#include <iostream>
using std::string;
using std::cout;
using std::endl;

class AbtractEmployee{
    virtual void AskPromotion() = 0;
};
// Create class
class Employee:AbtractEmployee {
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
    void AskPromotion(){
        if(Age>30)
            cout << Name << " got promoted! " << endl;
        else
            cout << Name << " sorry No  promotion for you! " << endl;
    }

};

int main() {
    Employee employee1 = Employee("Ayuba", "MonnieTech", 20);
    Employee employee2  = Employee("Tahiru", "MonnieTechNow", 35);
    employee1.AskPromotion();
    employee2.AskPromotion();

}
