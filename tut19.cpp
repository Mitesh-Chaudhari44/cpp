#include<iostream>
using namespace std;

int sum(int a,int b){
    cout<<"Using function with 2 arg"<<endl;
    return a+b;
}

int sum(int a,int b,int c){
    cout<<"Using function with 3 arg"<<endl;
    return a+b+c;
}

//Calculate the volume of a cylinder
int volume(double r ,int h){
    return(3.14 *r *r *h);
}

//Calculate the volume of cude
int volume(int a){
    return (a*a*a);
}

//Rectangular box
int volume(int l, int b ,int h){
    return (l*b*h);
}

int main(){
    cout<<"The sum of 3 and 6 "<<sum(3,6)<<endl;
    cout<<"The sum of 2, 4 and 5 "<<sum(2,4,5)<<endl;
    cout<<"The volume of cuboid of 3, 7 and 6 is "<<volume(3,7,6)<<endl;
    cout<<"The volume of cylinder of rad 3 and height 6 is "<<volume(3,6)<<endl;
    cout<<"The volume of cube side 3 is "<<volume(3)<<endl;
    return 0;
}