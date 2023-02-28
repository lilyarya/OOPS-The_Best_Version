#include<bits/stdc++.h>
using namespace std;
/**
Run-time polymorphism demonstrates the property of dynamic resolution or late
binding and is achieved by using function overriding.
When the base class’s function is overridden in the child class, then that function is
known as a virtual function. Keyword virtual is used for the same. By doing so, we
are redirecting the compiler to take the decision at runtime only.
*/
using namespace std;
class Vehicle {
public :
string color;
virtual void print() {       //virtual must be in parent class
cout << "Vehicle" << endl;
}
};
class Car : public Vehicle {
public :
int numGears;
void print() { // function made virtual
cout << "Car" << endl;
}
};
int main() {
Vehicle v;
Car c;
v.print();
c.print();
Vehicle *v1 = new Vehicle;
Vehicle *v2;
v2 = &c;
v1 -> print(); // This will print Vehicle class’ print()
v2 -> print();}