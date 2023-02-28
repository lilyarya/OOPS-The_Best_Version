//Initialization list
#include<bits/stdc++.h>
using namespace std;
// Using the initialisation list, we can directly assign the values to the data members of
// the class. Though in the following cases we mandatorily need to use the same:

/*
● When no base class default constructor is present
● When the data members are of type const
● When the data member and parameter have the same name
● When the data member of the reference type is used.
*/

class Student{
 public:
        int usn;
        const int rollno;
        int &id;
        Student(int rollno,int admno): rollno(rollno),usn(admno),id(this->usn){

        }
};

int main(){
    Student s1(24,24);
    cout<<s1.usn<<endl;
    cout<<s1.rollno<<endl;
    cout<<s1.id<<endl;
    return 0;
}