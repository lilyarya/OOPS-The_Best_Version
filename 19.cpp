#include<bits/stdc++.h>
using namespace std;
class Person{
    public:
     Person()  { cout << "Person::Person() called" << endl;  //must be there
      }
    Person(int x){
        cout<<"Person :: Person called parameterized"<<endl;
    }
};

class Professor:virtual public Person{
    public:
    //     Professor():Person(){
    //      cout<<"Professor :: Professor param called"<<endl;
    // }
    Professor(int x):Person(x){
         cout<<"Professor :: Professor param called"<<endl;
    }
};

class Student:virtual public Person{
    public:
    //  Student(){
    //      cout<<"Student::Student called"<<endl;
    // }
    Student(int x):Person(x){
         cout<<"Student::Student param called"<<endl;
    }
};

class TA : public Student,public Professor{
    public:
    TA(int x):Student(x), Professor(x)  {
   cout<<"TA::TA called"<<endl;
    }
};

int main(){
    TA t(0);
    return 0;
}

/*
Person::Person() called
Student::Student param called
Professor :: Professor param called
TA::TA called
*/