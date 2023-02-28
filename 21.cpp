//COMPILE TIME POLYMORPHISM
#include<bits/stdc++.h>
using namespace std;
/*  KEYWORD : oberloading, overriding
The word polymorphism means different forms . It occurs when multiple classes
are related to each other by inheritance. In C++, polymorphism means, a call to a
member function will cause a different function to be executed depending on the
type of object that invokes it. For example, (+) sign is used as an addition operator
as well as the concatenation operator.
Compile-time polymorphism:
It demonstrates the properties of static/early binding and occurs in the following
cases:
● Function Overloading and Operator Overloading
● Function Overriding

Function Overloading.
Note: In static/early binding, the compiler (or linker) directly associates an address
to the function call. It replaces the call with a machine language instruction that tells
the mainframe to leap to the address of the function.
*/

int test(int a, int b) { // function with 2 arguments
return a+b;
}
int test(int a) { // function with 1 argument
return a;
}
int test() { // function with no argument
   cout<<"Bhai kuch ni h"<<endl;
   return 0;
}
int main() {
// All the above functions have same name but differ in number of arguments
  cout<<test(5,3)<<endl;
  cout<<test(5)<<endl;
  cout<<test()<<endl;
}