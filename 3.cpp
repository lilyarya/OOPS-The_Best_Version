//DECLARE FUNCTIONS OUTSIDE
#include<bits/stdc++.h>
using namespace std;

//We can also define member functions outside the class
// using scope resolution operator :: 

class A{
    int x;
    public:
    int get(int x);            // should be alwyas public
};
int A :: get(int x){           // int get(int x)   to  = int A :: get(int x)
    this->x=x;
    return x*x;
}

int main(){
    A a;
    cout<<a.get(5);          // if we remove public from A we get erroe here
} 