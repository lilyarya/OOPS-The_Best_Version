//Destructor


//even if nothing creation of classes takes 1 byte of space
// for dynamic allocation, you always have to call destructor explicitly as delete, else it wont be called
#include<bits/stdc++.h>
using namespace std;

class Human{
    public:
   ~Human(){                              // always public if destrucyor is defined
    cout<<"destructor called"<<endl;
   }
};

int main(){
    Human h1;
    Human *h2= new Human();        // destructor not callled for h2 implicitly
   // delete h2; 
    return 0;
}