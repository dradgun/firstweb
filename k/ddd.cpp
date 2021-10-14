#include <iostream>
using namespace std;
int main()
{
    int X = 0, A = 5, B = 2, C = 11, D = 4, E = 3, F = 7 ;
    int x;
     X += C - (A +F) / E % (D - C) * A + B; 
    cout<<X<<endl;
    return(0);
}