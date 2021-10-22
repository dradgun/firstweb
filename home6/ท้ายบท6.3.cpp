#include<iostream>
#include<cstring>
#include <string>
#include <iomanip> 
using namespace std;

void getdata(string stdName[],string id[],float test1[],float test2[],float test3[],float total[]);
void sortdata(string stdName[],string id[],float test1[],float test2[],float test3[],float total[]);
void average(float test1[],float test2[],float test3[],float total[],float &AvgTest1,float &AvgTest2,float &AvgTest3,float &AvgTotal);
void displaydata(string stdName[],string id[],float test1[],float test2[],float test3[],float total[],float &AvgTest1,float &AvgTest2,float &AvgTest3,float &AvgTotal);
void swap(float arr1[],int j);
void swapStr(string arr1[],int j);

int main(){
	string stdName[20];
	string id[20];
	float AvgTest1,AvgTest2,AvgTest3,AvgTotal;
	float test1[20];
	float test2[20];
	float test3[20];
	float total[20];
	getdata(stdName,id,test1,test2,test3,total);
	sortdata(stdName,id,test1,test2,test3,total);
	average(test1,test2,test3,total,AvgTest1,AvgTest2,AvgTest3,AvgTotal);
	displaydata(stdName,id,test1,test2,test3,total,AvgTest1,AvgTest2,AvgTest3,AvgTotal);
	return 0;
}

void getdata(string stdName[],string id[],float test1[],float test2[],float test3[],float total[]){
	bool flag = true;
	for(int i = 0;i < 20;i++){
		while(flag == true){
			cout << i+1 << ". ";
			cout << "Enter ID : ";cin >> id[i];
			int a = id[i].size();
			if(a == 5){
				flag = false;
			}
		}
		flag = true;
		while(flag == true){
			cout << "Enter Name : ";cin >> stdName[i];
			int a = stdName[i].size();
			if(a <= 20){
				flag = false;
			}
		}
		flag = true;
		while(flag == true){
			cout << "Enter Score Test " << "1" <<". ";cin >> test1[i];
			if(test1[i] <= 25){
				flag = false;
			}
		}
		flag = true;
		while(flag == true){
			cout << "Enter Score Test " << "2" <<". ";cin >> test2[i];
			if(test2[i] <= 25){
				flag = false;
			}
		}
		flag = true;
		while(flag == true){
			cout << "Enter Score Test " << "3" <<". ";cin >> test3[i];
			if(test3[i] <= 50){
				flag = false;
			}
		}
		flag = true;
		total[i] =  test1[i]+test2[i]+test3[i];
		system("cls");
	}
}

void sortdata(string stdName[],string id[],float test1[],float test2[],float test3[],float total[]){
	int E = 19;
	int j;
	bool flag = true;
	while(flag == true){
		flag = false;
		for(j = 0;j < E;j++){
			if(total[j] < total[j+1]){
				swap(total,j);
				swapStr(stdName,j);
				swapStr(id,j);
				swap(test1,j);
				swap(test2,j);
				swap(test3,j);
				flag = true;
			}
		}
		E = E-1;
	}
}

void swap(float arr1[],int j){
	float Var;
	Var = arr1[j];
	arr1[j] = arr1[j+1];
	arr1[j+1] = Var;
}

void swapStr(string arr1[],int j){
	string Var;
	Var = arr1[j];
	arr1[j] = arr1[j+1];
	arr1[j+1] = Var;
}

void average(float test1[],float test2[],float test3[],float total[],float &AvgTest1,float &AvgTest2,float &AvgTest3,float &AvgTotal){
	for(int i = 0;i < 20;i++){
		AvgTest1 += test1[i];
		AvgTest2 += test2[i];
		AvgTest3 += test3[i];
		AvgTotal += total[i];
	}
	AvgTest1 = AvgTest1/20;
	AvgTest2 = AvgTest2/20;
	AvgTest3 = AvgTest3/20;
	AvgTotal = AvgTotal/20;
}

void displaydata(string stdName[],string id[],float test1[],float test2[],float test3[],float total[],float &AvgTest1,float &AvgTest2,float &AvgTest3,float &AvgTotal){
	system("cls");
	cout << "-------------------------------------------------------------------------------" << endl;
	cout << setw(2) << "No." << setw(10) << "Id" << setw(15) << "Name" << setw(20) << "Test1" << setw(10) << "Test2" << setw(10) << "Test3" << setw(10) << "Total";
    cout << "\n-------------------------------------------------------------------------------" << endl;
    for(int i = 0;i < 20;i++){
    	cout << setw(2) << i+1 << "." << setw(10) << id[i] << setw(10) << stdName[i] << setw(20) << test1[i] << setw(10) << test2[i] << setw(10) << test3[i] << setw(10) << total[i] << endl;
	}
	cout << "Average of mark " << setw(31) << AvgTest1 << setw(10) << AvgTest2<< setw(10) << AvgTest3 << setw(10) << AvgTotal;  
}



