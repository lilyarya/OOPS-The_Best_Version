/*Diamond problem
The diamond problem The diamond problem occurs when two superclasses 
of a class have a common base class. For example, in the following diagram, 
the TA class gets two copies of all attributes of Person class, this causes ambiguities.
*/
#include<bits/stdc++.h>
using namespace std;
class Person{
    public:
    Person(){
        cout<<"Person :: Person called"<<endl;
    }
};

class Professor:public Person{
    public:
    Professor(){
         cout<<"Professor :: Professor called"<<endl;
    }
};

class Student:public Person{
    public:
    Student(){
         cout<<"Student::Student called"<<endl;
    }
};

class TA : public Student,public Professor{
    public:
    TA(){
   cout<<"TA::TA called"<<endl;
    }
};

int main(){
    TA t;
    return 0;
}
/*
Person :: Person called
Student::Student called    // note student called first acc to defined
Person :: Person called
Professor :: Professor called
TA::TA called


In the above program, constructor of ‘Person’ is called two times.
 Destructor of ‘Person’ will also be called two times when object
‘t’ is destructed. So object ‘ta1’ has two copies of all members of ‘Person’,
 this causes ambiguities. The solution to this problem is ‘virtual’ keyword.
  We make the classes ‘Faculty’ and ‘Student’ as virtual base classes to avoid
   two copies of ‘Person’ in ‘TA’ class.
*/