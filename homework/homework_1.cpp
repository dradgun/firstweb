#include <iostream>
using namespace std;

int main()
{
    int A, B;
    cout << "Enter number1 : ";
    cin >> A;
    cout << "Enter number2 : ";
    cin >> B;
    float compute1, compute2, compute3, compute4, compute5;
    cout << "Result of "<< endl;
    compute1 = A + B;
    cout << A << " + " << B << " = " << compute1 << endl;
    compute2 = A - B;
    cout << A << " - " << B << " = " << compute2 << endl;
    compute3 = A * B;
    cout << A << " * " << B << " = " << compute3 << endl;
    compute4 = A / B;
    cout << A << " / " << B << " = " << compute4 << endl;
    compute5 = A % B;
    cout << A << " % " << B << " = " << compute5 << endl;
    cout << "Press any key to continue . . . ";
    return (0);
}