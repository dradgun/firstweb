#include <iostream>
#include <string>
using namespace std;
int main()
{
    char Ch;
    string Message;
    cout << "Enter character : ";
    cin >> Ch;
    cout << endl;
    if (isalnum(Ch))
    {
        if (isalpha(Ch))
        {
            if (islower(Ch))
                Message = "lower character.";
            else
                Message = "upper character.";
        }
        else if (isdigit(Ch))
            Message = "digit.";
    }
    else
        Message = "special character.";
    cout << "\'" << Ch << "\'"
         << " is " << Message << endl;
    if (isalpha(Ch))
    {
        if (islower(Ch))
        {
            cout << "\'" << Ch << "\'"
                 << " convert to upper \'";
            cout << (char)toupper(Ch) << "\'";
        }
        else
        {
            cout << "\'" << Ch << "\'"
                 << " to lower \'";
            cout << (char)tolower(Ch) << "\'";
        }
        cout << endl;
    }
    return (0);
}