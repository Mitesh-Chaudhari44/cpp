#include<iostream>
using namespace std;

typedef struct employee
{
    int eId;
    char favChar;
    float salary;
}ep;

union money
{
    int rice ; //4
    char car;  //1
    float pounds; //4
};


int main(){
    enum Meal{breakfast,lunch,dinner};
    Meal m1=breakfast;
    cout<<m1<<endl;

        // cout<<breakfast<<endl;
        // cout<<lunch<<endl;
        // cout<<dinner<<endl;

    // union money m1;
    // m1.rice=34;
    // m1.car='c';
    // cout<<m1.car<<endl;

    // ep harry;
    // struct employee shubh;
    // struct employee bhavesh;
    // harry.eId=1;
    // harry.favChar='c';
    // harry.salary=50000.0;
    
    // cout<<"The salary is "<<harry.salary<<endl;
    // cout<<"The eId is "<<harry.eId<<endl;
    // cout<<"The favchar is "<<harry.favChar<<endl;

    return 0;
}