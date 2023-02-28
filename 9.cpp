//Shallow vs Deep copy
#include<bits/stdc++.h>
using namespace std;

class Student{
    public:
    int usn=0;
    char *name;
    Student(){
          cout<<"default constructor mandatory to call copy constructor"<<endl;
    }
    Student(int usn,char name[]){
        this->usn=usn;
      this->name=name;
    }
    Student(Student const &s1){         // necessary to use & else it will loop...//deep copy...remove nd get shallow copy
      this->usn=  s1.usn;
        this->name = new char[strlen(s1.name)+1];
        strcpy(this->name,s1.name);
    }
    void display(){
        cout<< this->name<<endl;
        cout<<this->usn<<endl;
    }

};

int main(){
    char naam[5] = "arya";
    Student s1(12,naam);
    Student s2=s1;
    
    s1.display();
    s2.display();
    // now change value os s1"s name
    s1.name[1]='n';
    s1.display();
    s2.display(); 



    return 0;
}