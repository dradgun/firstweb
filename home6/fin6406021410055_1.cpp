#include <iostream>
#include <iterator>
#include <string.h>
using namespace std;

bool isSymmetry(int data[]);
int main()
{
    bool f;
   int G;
   int number[12] = {} ;

   cout << "Enter 13 integers: ";
   for(int i = 0; i<=12;i++){
   cin >> number[i];
   }
    G = (sizeof(number) / sizeof(number[0]));
    for (int i = 0; i<= ((sizeof(number) /  sizeof(number[0]))); i++){
        G--;
    }
    f = isSymmetry(number);
    if (f == true){
    cout << " symmetry.";
    } else {
    cout << "not symmetry.";
}
    return 0;
   }
bool isSymmetry(int data[]){
    bool check = true;
      int G= 12;
    for (int i = 0; i <= G; i++){
        if(data[i] != data[G]){
            check = false;
        }
        G--;
    }
    if (check == false){
        return false;
    } else
    {
        return true;
        }
}
