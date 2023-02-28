#include<bits/stdc++.h>
using namespace std;
class Mammal{
    public:
    void walk(){
        cout<<"Mammal walks"<<endl;
    }
};
class Animal:public Mammal{
    public:
//    void walk(){
//         cout<<"Animal walks"<<endl;
//     }
};

class Human: public Mammal,public Animal{
   public:
   void legs(){
    cout<<"has four legs"<<endl;
   }
    void walk(){
        cout<<"Animal walks"<<endl;
    }
};

int main(){
    Human h;   // present in base class so calls base ka function
    h.legs();
    h.walk();
    Mammal m; // calls own funct
    m.walk();
    Animal a;  // not present so parent class fucnction
    a.walk();
 }
// Hierarchical Inheritance: Here, more than one derived classes are created
// from a single base class, and further, child classes act as parent classes for
// more than one child class.  Tree
//  Hybrid Inheritance: It is the combination of more than one inheritances. It
// is also known as Diamond inheritance .