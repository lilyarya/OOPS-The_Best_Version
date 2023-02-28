//DESTRUCTOR
#include<bits/stdc++.h>
using namespace std;
/*
 A destructor as the name itself suggests, is used to destroy the objects that have been created by
a constructor. A destructor is also a member function whose name is the same as
the class name but preceded by tilde ('~').

A destructor takes no arguments, and no return types can be specified for it.
The compiler automatically generates one for static allocations.
Destructors are invoked in the reverse order in which the constructors were
called.
As soon as obj goes out of scope, destructor is called and obj is
destroyed releasing its occupied memory.
*/

class Sum {
int a, b;
public :
Sum(int num1, int num2 ) {                  // parameterized constructor
cout << "Constructor at work" << endl;
a = num1;
b = num2;
}
~Sum( ){                                    //destructor
cout<< "Destructor at work" << endl;
}
int getSum(){
return a + b;
}
};
int main() {
Sum obj(4, 6);
}
//Output :
//Constructor at work
//Destructor at work

//YIPPEEE OOPS 1 COMPLETE