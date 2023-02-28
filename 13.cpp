//Abstraction
#include<bits/stdc++.h>
using namespace std;

class Employee{
    private:
    float bonus;
    public:
    float salary;
    int performance;

    Employee(float sal,int perf){
        this->salary=sal;
        this->performance=perf;

    }
    void setBonus(){
        this->bonus= salary*performance*.10;
    }
    void getBonus(){
        cout<<"The bonus is : "<<this->bonus<<endl;
    }

};

int main(){
    Employee e1(10000,900);
    e1.setBonus();
    e1.getBonus();
   // cout<<e1.bonus<<endl;   cant even access, getting the value of bonus directly is impossible
}