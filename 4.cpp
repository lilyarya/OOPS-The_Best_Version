//CONSTRUCTORS
#include<bits/stdc++.h>
using namespace std;
/*
It is a way to initialise the values when objects are made.
It alllocates memory to variable of the objects.
NOTE:
-> They dont return anything
-> called as soon as object is created
->same name as that of class, follows access rules
*/
class Sum {
int a, b;
public :

    Sum(){                          //constructor that accepts no parameter is called default constructor.
        a=10;                       // User defined default constructor
        b=10;                      //The compiler automatically supplies a default constructor implicitly.
    }                             //Constructor is the public member of the class.
    Sum(int x,int y){            // paramterized constructor
        this->a= x;
        this->b=y;
    }
    int getSum(){

    return a + b;
    }

} ;
int main() {
Sum obj;              //implicit default constructor invoked
cout<<obj.getSum()<<endl;
Sum obj2(100,100);
cout<<obj2.getSum()<<endl;
}