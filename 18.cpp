#include<bits/stdc++.h>
using namespace std;
class Person{
    public:
    Person(){
        cout<<"Person :: Person called"<<endl;
    }
};

class Professor:virtual public Person{
    public:
    Professor(){
         cout<<"Professor :: Professor called"<<endl;
    }
};

class Student:virtual public Person{
    public:
    Student(){
         cout<<"Student::Student called"<<endl;
    }
};

class TA : public Student,public Professor{
    public:
    TA():Student(), Professor()  {
   cout<<"TA::TA called"<<endl;
    }
};

int main(){
    TA t();
    return 0;
}

/*
no output
*/