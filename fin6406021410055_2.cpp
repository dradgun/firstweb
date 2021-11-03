#include <iostream>
using namespace std;
void insertnum(int num[],int max,int amount);
int main(){
    int number,num[20],amount;
    cout<<"How many numbers in array A:";
    cin >> number;
    cout<<"Enter "<< number <<" integers for array A:";
    for(int i=0;i<number;i++){
        cin>> num[i];
    }
    cout<<endl;
    cout<<"Enter x: ";
    cin>>amount;
    cout<< endl;
    insertnum(num,number+1,amount);
    cout<<"The final array A:";
    for(int i = 0 ; i< number+1;i++){
        cout << num[i]<<" ";
    }
    cout<< endl;
    return 0;
}
void insertnum(int num[],int max,int amount){
    num[max-1]=amount;
    for(int i = 0 ; i<max;i++){
        for(int l = i ; l<max;l++){
            if(num[i]>num[l]){
                int read;
                read = num[i];
                num[i]=num[l];
                num[l]=read;
            }
        }
    }
}