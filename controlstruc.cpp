#include<iostream>
using namespace std;

int main(){
   // cout<<"This is tutorial 9";
    int age;
    cout<< "Tell me your age"<<endl;
    cin>>age;

    // 1. Selection control structure: If else-if else ladder
    // if((age<18) && (age>0)){
    //     cout<<"You can not come to my party"<<endl;
    // }
    // else if(age==18){
    //     cout<<"You are a kid and you will get a kid pass to the party"<<endl;
    // }
    // else if(age<1){
    //     cout<<"You are not yet born"<<endl;
    // }
    // else{
    //     cout<<"You can come to the party"<<endl;
    // }
     
    switch (age)
    {
    case 1:
    cout << "You are not yet born" << endl;
        break;
    
    case 2:
    cout << "You are a baby" << endl;
    
    case 3:
    cout << "You are a toddler" << endl;

    case 4:
    cout << "You are a preschooler" << endl;
    
    default:
    cout << "You can come to the party" << endl;
        break;
    }




    return 0;
}