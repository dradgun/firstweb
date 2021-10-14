#include <iostream>
using namespace std;
int main()
{
    char ch;
    cout << "Enter character : ";
    cin >> ch;
    cout << endl;
    int ascii = ch;
    if(ascii <= 57 && ascii >= 48){
        cout << "'\'" << ch << "'\'" " is digit\n";
        }

    else if(ascii <= 90 && ascii >= 65){
        cout << "'\'" << ch << "'\'" << "is Upper character.\n";
        cout << "'\'" << ch << "'\'" " convert to lower ";
        ch = ch+32;
        cout << "'\'" << ch << "'\'";
    }

    else if(ascii >= 97 && ascii <= 122){
        cout << "'\'" << ch << "'\'" << "is lower character.\n";
        cout << "'\'" << ch << "'\'" " convert to Upper ";
        ch = ch-32;
        cout << "'\'" << ch << "'\'";

    }else cout << "special character.";
}
