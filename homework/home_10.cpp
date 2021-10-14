#include <stdio.h>
#include<iostream>
#include <conio.h>
using namespace std;
int main()
{
float money, TotalPrice, pay=0, service_charge;
    cout << "Input money = ";
    cin >> money;

if(money > 4000001){
        TotalPrice = (money*37) / 100;
        printf("VAT = 37% \n");
       cout << "TotalPrice  = "<< TotalPrice << endl;  
    }
       
    else if(money > 1000001 && money <= 4000000){
        TotalPrice = (money*30) / 100;
        printf("VAT = 30% \n");
        cout << "TotalPrice  = "<< TotalPrice << endl;  
    }
       
    else if(money  > 500001 && money  <= 1000000){
        TotalPrice = (money*20) / 100;
        printf("VAT = 20% \n");
       cout << "TotalPrice  = "<< TotalPrice << endl;  
    }
       
   else if(money  > 100001 && money  <= 500000){
        TotalPrice = (money*10) / 100;
        printf("VAT = 10% \n");
         cout << "TotalPrice  = "<< TotalPrice << endl;  
  }
 else if(money  <= 100000){
        TotalPrice = (money*5) / 100;
        printf("VAT = 5% \n");
        cout << "TotalPrice  = "<< TotalPrice << endl;  
}
}