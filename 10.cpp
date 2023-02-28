//ENCAPSULATION
#include<bits/stdc++.h>
using namespace std;

/*
to suddenly apply the brakes,
This whole system is enclosed inside the car’s body. This
process is known as encapsulation. To stop the car, you just have to apply the brake
without thinking of the internal functioning of the car’s engine system.

Functionality is defined at a logical place and not at multiple locations.
 It prevents our data from being modified from any external influence.

Abstraction ​means providing only some part of the information to the user by
hiding the internal implementation details of it. We just need to know about the
methods of the objects that we need to call and the input parameters needed to
trigger a specific operation excluding the details of implementation and type of
action performed to get the result.

It allows us to group different related units(classes) as siblings.
It helps in the reduction of design and implementation complexity.

*/

class Student{
    public:
    int usn=0;
    string name;
    // Student(){
    //       cout<<"default constructor mandatory to call copy constructor"<<endl;
    // }
    Student(int usn,string name){
        this->usn=usn;
        this->name=name;
    }

};

int main(){
    Student s1(12,"arya");
    
    
    cout<<s1.usn<<endl;

    return 0;
}