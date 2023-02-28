//Shallow copy
#include<bits/stdc++.h>
using namespace std;

class Student{
   
    public:
     int age;
    char *name;
    Student(){
        cout<<"Const called"<<endl;
    }
    Student(int age,char name[]){
        this->name=name;
        this->age=age;

    }

        void display(){
        cout<< this->name<<endl;
        cout<<this->age<<endl;
    }
};

int main(){
    char name[5]="Arya";
    Student s1(12,name);
    Student s2(s1);
    s1.display();
    s2.display();
    s1.name[1]='n';
       s1.display();
    s2.display();
    return 0;
}