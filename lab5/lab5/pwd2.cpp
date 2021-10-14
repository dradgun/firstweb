// Jirapat Chookleeb 6406021421049
// Chadana isarawirayu 6406021421286
// Kittisak polsawat 640602142127-8

#include <iostream>
#include <string>
using namespace std;

int main(){
	int number1,number2;
	int c;
	int sum;
	cout << "Enter number 1 : "; cin >> number1;
	cout << "Enter number 2 : "; cin >> number2;
	if(number1 < number2){
		for(int i = number1;i <= number2;i++){	
			for(int j =1;j <= i;j++){
				//if(i % 1 == 0){
					if(i % j ==0){
						c++;
					}
				//}
			}
			if(c > 2){
				cout << i << "^2 ";
				sum += i*i;
			}
			c = 0;
		}
		cout << "Anwser is " << sum;
	}
	else{
		cout << "Enter your number agian";
	}
	
}
