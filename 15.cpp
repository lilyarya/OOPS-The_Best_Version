#include<bits/stdc++.h>
using namespace std;
//multiple inheritance
class Red{
    public:
    string color1;
    Red(){
        this->color1="red";
        cout<<"Red"<<endl;
    }
};

class Yellow{
    public:
    string color2;
    Yellow(){
       this->color2="yellow";
       cout<<"yellow"<<endl;
    }
};

class Orange : public Red,public Yellow{
   public:
   string color3;
   Orange(){
    this->color3=color1+color2;
     cout<<this->color3<<endl;
   }
};

int main(){
    Orange o;

    return 0;
}