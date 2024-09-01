#include<iostream>
using namespace std;
/*
student --> Test [Done]
student --> sports [Done]
test --> result [Done]
sports --> result [Done]
*/

class Student{
    protected:
        int roll_no;
    public:
        void set_number(int a){
            roll_no = a;
        }
        void print_number(void){
            cout<<"Your roll  no is "<<roll_no<<endl;
        }
};

class Test : virtual public Student{
    protected:
        float maths, physics;
        public:
            void set_marks(float m1,float m2){
                maths = m1;
                physics = m2;
            }

            void print_marks(void){
                cout<< "You result is here: "<<endl
                    << "Maths: "<<maths<<endl
                    << "Physics: "<<physics<<endl;
            }
};

class Sports : virtual public Student{
    protected:
        float score;
    public:
        void set_score(float sc){
            score = sc;
        }

        void print_score(void){
            cout<<"Your PT score is "<<score<<endl;
        }
};

class Result : public Test,public Sports{
    private:
    float total;
    public:
    void display_result(void){
        total = maths + physics + score;
        print_number();
        print_marks();
        print_score();
        cout<<"Your total score is "<<total<<endl;
    }
};


int main(){
    Result mitesh;
    mitesh.set_number(76);
    mitesh.set_marks(95,43);
    mitesh.set_score(9);
    mitesh.display_result();


    return 0;
}