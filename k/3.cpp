#include <stdio.h>
#include<iostream>
#include <conio.h>
using namespace std;
int main()
{
float money, distance ;
    cout << "Input distance = ";
    cin >> distance ;

if(distance <= 1){
        money = 40;
       cout << "money = "<< money << endl;  
    }
       
    else if(distance >=2 && distance <= 10){
        money = (distance * 5) + 40;
        cout << "money  = "<< money  << endl;  
    }
       
    else if(distance >=11 && distance <= 15){
        money = (distance * 4) + 40;
        cout << "money  = "<< money  << endl;  
    }
       
   else if(distance >=16 && distance <= 20){
        money = (distance * 3) + 40;
        cout << "money  = "<< money  << endl;  
  } 
 else if(distance >= 21){
        money = (distance * 2) + 40;
        cout << "money  = "<< money  << endl;  
}
}