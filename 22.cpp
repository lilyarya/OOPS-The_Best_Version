#include<bits/stdc++.h>
using namespace std;

/*
Now, suppose we have two classes, A and B where A is the base/parent class, and B
is the child/derived class. If the base class has a function named print() and a
child class of it also contains such a function, then this is a case of function 
overriding.Here, we are deciding at the compile time about the function to be called.
*/

class Vehicle {
public :
string color;
void print() {            //put virtual here for runtime polymorphism
cout << "Vehicle" << endl;
}
};
class Car : public Vehicle {
public :
int numGears;
void print() {
cout << "Car" << endl;
}
};

int main(){
  Vehicle v;
  Car c;
  v.print();   //vehicle
  c.print();   //car
  Vehicle *vv=new Vehicle;
  Vehicle *vc;
  vv->print();   //vehicle
  vc=&c;
  vc->print();   //vehicle
  //cv=&v;       // not possible
 

}