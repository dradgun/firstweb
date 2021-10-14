#include<iostream>
using namespace std;
int main()
{
    int book ,toy,model,stationery;
    cout << "Input number of Books :  ";
    cin>> book ;
     cout << "Input number of Toys :  ";
    cin>> toy ;
     cout << "Input number of Model :  ";
    cin>> model ;
     cout << "Input number of Stationery :  ";
    cin>> stationery ;
    float books,toys, models,stationerys,totalsale;
    float pay ,payment; 
    float week = 1000;
     books = book* 120 ;
     toys = toy*80;
     models= model* 50;
     stationerys = stationery*15;
     totalsale = books+toys+models+stationerys ;
   
if(totalsale >= 100000){
        pay = (totalsale*10)/100;
        payment = week+pay;
       cout << "payment = "<< payment << endl;  
    }
       
    else if(totalsale >=10000&&totalsale <=99999){
      pay = (totalsale*5)/100;
        payment = week+pay;
       cout << "payment = "<< payment << endl;  
    }

    else if(totalsale >=5000&&totalsale <=9999){
        pay = 0;
        payment = 1000+pay;
       cout << "payment = "<< payment << endl;  
    }
       
    else if(totalsale >=1&&totalsale <=4999){
     pay = (week*10)/100;
        payment = week-pay;
         cout << "payment = "<< payment << endl;  
    }
       
   else if(totalsale=0){
         pay = (week*50)/100;
        payment = week-pay; 
         cout << "payment = "<< payment << endl;  
        
  } 
 
}