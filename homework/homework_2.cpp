#include <iostream>
#include <math.h>
#include <iomanip>
using namespace std;
int main()
{
    cout << "AX^2 + BX + C = 0"<<endl;
    int A, B, C;
    cout << "Enter number A : ";
    cin >> A;
    cout << "Enter number B : ";
    cin >> B;
    cout << "Enter number C : ";
    cin >> C;
    double root, X1, X2;
    cout << endl;
    root = sqrt(B * B - 4* A * C);
    X1 = (-B + root) / (2 * A);
    X2 = (-B - root) / (2 * A);
    cout << "Answer of " <<A<<"X^2 + " <<B<<"X + 2 = 0" << endl;
    cout << "Answer 1 = " << fixed << setprecision (2) << X1 << endl;
    cout << "Answer 2 = " << fixed << setprecision (2) << X2 << endl;
    cout << "Press any key to continue . . . ";
    return (0);
}