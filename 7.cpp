//STATIC ALLOCATION
#include<bits/stdc++.h>
using namespace std;
/*
For each student, their names and roll
number can be different so we will be allotting distinct memories to each. But the
school name should be the same. By using a deep copy, we will allocate each
student a different memory for the school name. To overcome this, we will be using
the ​static ​keyword.
​A static function can be invoked even if no objects of the class exist and the static functions are accessed
using only the class name and the (::) operator.
*/
class Student{
     public:
    static int totalStudents;       //static variables
   
    int rollno;
    int age;
    
    Student(){
        totalStudents++;
    }
    static void ini(){
        totalStudents=0;
    }
    static int getStu(){              //must be static
        return totalStudents;
    }

};
int Student::totalStudents=0;      //initialise static members

int main(){
   Student s1;
   Student s2;
   Student s3;
    cout<<Student::totalStudents<<endl;  // use scope resolution operator
    return 0;
}