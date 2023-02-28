
// STATIC AND DYNAMIC ALLOCATION
#include<bits/stdc++.h>
using namespace std;

class Student{
    public:                      // public to access
    int age=10;
    string name;
     void print(){              // if public not defined, by default its private and 
        cout<<age;              //cant be accessed or called from main class
     }
};

int main(){
  Student s1;                    //static allocation
  Student *s2= new Student();    // dynamic allocation
   s1.print();                   // use dot
   s2->print();                 // use arrow
}

//This is a pointer that points to the object for which this function was called.
//This unique pointer is automatically passed to a member function when it is called.