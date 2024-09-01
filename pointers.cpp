#include<iostream>
using namespace std;
 
 int main(){
    int a=5;
    int* b=&a;

    // What is a pointer? ----> Data type which holds the address of other data types


    // & ---> (Address of) Operator
    cout<<"The address of a is " <<&a<<endl;
    cout<<"The address of a is " <<b<<endl;

     // * ---> (value at) Dereference operator
    cout<<"The value at address b is " <<*b<<endl;

    int** c =&b;
    cout<<"The address of b is " <<&b<<endl;
    cout<<"The address of b is " <<c<<endl;
    cout<<"The value at address c is " <<*c<<endl;  //*c =b

    cout<<"The value at address value_at(value_at(c)) is  " <<**c<<endl;


    return 0;
 }