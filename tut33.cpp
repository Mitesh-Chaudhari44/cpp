#include <iostream>
using namespace std;

class BankDeposit
{
    int principal;
    int years;
    float interestRate;
    float returnValue;

public:
    BankDeposit() {} // ye constructor kuch nahi karta hai

    // apne constructor banaye tab compiler ko khojna padta hai konsa constructor run karna hai

    // jab apke bd1 bd2 bd3 bante hai to compiler ko contructor jo call karna padta hai to compiler decide hi nahi kar pa raha konsa constructor call karu to complier ko constructor ek aisa bhi chahiye jo kuch na kare

    BankDeposit(int p, int y, float r); // r can be value like 0.04
    BankDeposit(int p, int y, int r);   // r can be value like 15
    void show();
};

BankDeposit::BankDeposit(int p, int y, float r)
{
    principal = p;
    years = y;
    interestRate = r;
    returnValue = principal;
    for (int i = 0; i < y; i++) // 1 year 1 bar chalega n year hai to n bar chalega
    {
        returnValue = returnValue * (1 + r);
    }
}

BankDeposit::BankDeposit(int p, int y, int r)
{
    principal = p;
    years = y;
    interestRate = float(r) / 100;
    returnValue = principal;
    for (int i = 0; i < y; i++) // 1 year 1 bar chalega n year hai to n bar chalega
    {
        returnValue = returnValue * (1 + interestRate);
    }
}

void BankDeposit ::show()
{
    cout << endl
         << "Principal amount was " << principal
         << ". Return value after " << years
         << " year is " << returnValue << endl;
}

int main()
{
    BankDeposit bd1, bd2, bd3;
    int p, y;
    float r;
    int R;

    bd3.show();
    cout << "Enter the value of p , y and r" << endl;
    cin >> p >> y >> r;
    bd1 = BankDeposit(p, y, r);
    bd1.show();

    cout << "Enter the value of p , y and R" << endl;
    cin >> p >> y >> R;
    bd2 = BankDeposit(p, y, R);
    bd2.show();

    return 0;
}