//FUNCTIONS AS PARAMETER
#include<bits/stdc++.h>
using namespace std;

int add(int x,int y){
return x+y;}

int multiply(int x,int y){
    return x*y;
}

int compute(int x,int y,int (*func_ptr)(int,int)){
    return func_ptr(x,y);
}

int main(){
    int x=10;
    int y=10;
cout<<compute(x,y,add)<<endl;
cout<<compute(x,y,multiply);

}