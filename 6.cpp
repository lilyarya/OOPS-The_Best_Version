//Copy Constructor
#include<bits/stdc++.h>
using namespace std;

/*
DEFAULT COPY CONSTRUCTOR(Shallow)
It copies all of the member field values. Here, the pointer will be copied but not the
memory it points to. It means that the original object and the created copy will now
point to the same memory address, which is generally not preferred.
Copies references to the original object. ​Default copy constructor​ uses the same way of copying.

DEEP COPY
Deep memory allocates different memory for the copied task. It is generally used
when we assign the dynamic memory using pointers.

*/

class Student{
 int age;
 char * name;
    public:
    Student(int age, char * name){
        this->age= age; // shallow copy
        this->name= new char[strlen(name)+1]; // one for null character
        strcpy(this->name,name);          // deep copy
    }

};

int main(){
    Student s1(10,"Arya");
    return 0;
}