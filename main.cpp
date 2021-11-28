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
    string Company;
    int Age;

protected:
    string Name;

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
// Create a function in the class
    void AskPromotion(){
        if(Age>30)
            cout << Name << " got promoted! " << endl;
        else
            cout << Name << " sorry No  promotion for you! " << endl;
    }
// Create a function/method in class
    virtual void Work(){
        cout<< Name<< " is checking emails, task backlog, performing task..."<<endl;
    }
};

// Inheritance
class Developer: public Employee {
public:
    string FavprogrammingLang;
//    Create a Constructor
    Developer(string name, string company, int age, string favprogramminglanguage)
            : Employee(name, company, age){
        FavprogrammingLang = favprogramminglanguage;
    }
// Create a function/method in the class
    void FixBug(){
        cout << Name << " fix bug using " << FavprogrammingLang<< endl;
    }
    void Work(){
        cout<< Name<< " is writing "<<FavprogrammingLang<<" code"<<endl;
    }
};

class Teacher : public Employee{
public:
    string Subject;
// Create a function/method in the class
    void PrepareLessson(){
        cout << Name << " is preparing " << Subject << " lesson"<< endl;
    }
    //    Create a Constructor
    Teacher(string name, string company, int age, string subject)
            : Employee(name, company, age){
        Subject =subject;
    }
    void Work(){
        cout<< Name<< " is teaching "<<Subject<<endl;
    }
};

int main() {
    Employee employee1 = Employee("Ayuba", "MonnieTech", 20);
    Employee employee2  = Employee("Tahiru", "MonnieTechNow", 35);
//    employee1.AskPromotion();
//    employee2.AskPromotion();
    Developer dev = Developer("zsuzsa", "YVA", 28, "python");
//    dev.FixBug();
//    dev.FixBug();
    dev.AskPromotion();
    Teacher tech = Teacher("Musa", "makaranta", 36, "math");
//    tech.PrepareLessson();
    tech.AskPromotion();
//    dev.Work();
//    tech.Work();
    Employee *e1=&dev;
    Employee *e2=&tech;
    Employee *e3=&employee1;

    e1->Work();
    e2->Work();
    e3->Work();


}