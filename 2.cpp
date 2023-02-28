//ACCESS MODIFIERS

#include<bits/stdc++.h>
using namespace std;
/*
The private members can be accessed only from within the class. These members
are hidden from the outside world. Hence they can be used only by member
functions of the class in which it is declared.
The public members can be accessed outside the class also. These can be directly
accessed by any function, whether member function of the class or non-member
function. These are basically the public interface of the class.
By default, members of a class are private if no access specifier is provided.

Sometimes there is a necessity to provide access even to private members, in these
cases we need to create functions called getters and setters. Getters are those
functions that allow us to access data members of the object. However, these
functions do not change the value of data members. These are also called accessor
function.
Setters are the member functions that allow us to change the data members of an
object. These are also called mutator function.
*/

class A{
    int x; 
    int f(){
        return x*x;
    }
    public:
        int y;
        int ff(){
            return y*y;
        }
        void setter(int x){
          this->x=x;                  // always use arrow
        }
        int getter(){
            return x*x;
        }
};
int main(){
    A *a= new A;
    //a.x=10;        // access denied
    //a.f();         // access denied
    a->y=11;         // use arrow when allocated dynamically
    cout<<a->ff()<<endl;

    A aa;
    aa.setter(5);
    cout<<aa.getter()<<endl;
}