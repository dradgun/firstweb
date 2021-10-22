#include<iostream>
#include <stdlib.h> 
#include<time.h>
#include <iomanip> 
using namespace std;

void random(int stc,float std[],float &total);
void display(float std[],int stc,float total);

int main(){
	float total,notV;
	int stc;
	srand((float)time(0));
	cout << "Enter number student chairman : ";cin >> stc;
	float std[stc];
	cout << "\nNumber of right student : 500" << endl;
	random(stc,std,total);
	cout << "Number of Votes : " << total << " = " << (total/500.00f)*100 << "%" << endl;
	notV = 500.00f - total;
	cout << "Number of not votes : " << notV << " = " << (notV/500.00f)*100 << "%" << endl;
	display(std,stc,total);
	
}

void random(int stc,float std[],float &total){
	int stdVote = 501;
	for(int i = 0;i < stc;i++){
		std[i] = rand() % stdVote;
		stdVote -= std[i];
		total += std[i];
	}

}

void display(float std[],int stc,float total){
	int k = 1;
	float percent[stc];
	float totalPer;
	cout << "\nResult of election chairman";
	cout << "\n----------------------------------" << endl;
	cout << " No.        Votes       Percent(%)" << endl;
	cout << "----------------------------------" << endl;
	for(int i = 0;i < stc;i++){
		percent[i] = (std[i]/total)*100;
		cout << setw(3) << k << ".";
		cout << setw(12) << std[i] << setw(18) << percent[i] << "%" << endl;
		totalPer += percent[i];
		k++;
	}
	cout << "----------------------------------" << endl;
	cout << "Total" << setw(11) << total << setw(15) << totalPer << ".00" << endl;
	
}

