#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    int marks[] = {23, 45, 67, 90};
    cout << "These are marks" << endl;
    cout << marks[0] << endl;
    cout << marks[1] << endl;
    cout << marks[2] << endl;
    cout << marks[3] << endl;

    int mathMrks[4];
    mathMrks[0] = 22;
    mathMrks[1] = 212;
    mathMrks[2] = 45;
    mathMrks[3] = 55;

    cout << "These are math marks" << endl;
    cout << mathMrks[0] << endl;
    cout << mathMrks[1] << endl;

    // You can change value of an array
    // mathMrks[2] = 455;

    // cout << mathMrks[2] << endl;
    // cout << mathMrks[3] << endl;

    // for (int i = 0; i < 4; i++)
    // {
    //     cout << "The value of marks " << i << " is " << marks[i] << endl;
    // }
    int i;
    do
    {
        cout << "The value of marks " << i << " is " << marks[i] << endl;
        i++;
    } while (i < 4);
    
    // cout << endl;
    // int *p = marks;
    // cout << "The value of *p is " << setw(3) << *p << endl;
    // cout << "The value of *(p+1) is " << *(p + 1) << endl;
    // cout << "The value of *(p+2) is " << *(p + 2) << endl;
    // cout << "The value of *(p+3) is " << *(p + 3) << endl;

    return 0;
}