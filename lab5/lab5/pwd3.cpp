#include <iostream>
using namespace std;

int mian(){
	int number1;
	int num;
	cout << "Enter student you need to : ";
	cin >> number1;
	for(int i = 1;i <= number1;i++){
		cout << "Enter score " << i;
		cin >> num;
		if(num < 0 || num > 5){
			cout << "Enter score " << i;cin >> num;
		}
	}
}
