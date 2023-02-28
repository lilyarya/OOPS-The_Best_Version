//Inheritence
#include<bits/stdc++.h>
using namespace std;

class Animal{
    public:
     int legs;
     Animal(){
        cout<<"Animal"<<endl;
     }
};
//single
class Human : public Animal{
    public:
       
       Human(){
         cout<<"Human"<<endl;
         this->legs=4;
       }
       void print(){
         cout<<this->legs<<endl;
       }
};
//miltilevell
class child:public Human{
    public:
    child(){
        cout<<"child"<<endl;
    }
};

int main(){
    child h;
    h.legs=4;
    h.print();
    return 0;
    //order of constructor Animal Human Child
}