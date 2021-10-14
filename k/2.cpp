// Jirapat Chookleeb 6406021421049
// Chadana isarawirayu 6406021421286
// Kittisak polsawat 640602142127-8
#include<iostream>
using namespace std;

int main(){
	int n;
	int num;
	bool flag; //bool true false
	cout << "How many student score : ";
	cin >> n;
	int index[n];
	for(int i=1;i <= n;i++){  // 1 -----> n
		flag = true;
		while(flag == true){
			cout << " Enter student " << i << " score : ";
			cin >> num;
			if(num < 0 && num > 5){
				flag = true;
			}
			if(num >= 0 && num <= 5){
				flag = false;
			}
				
			
		}
		index[i] = num;
		/*cout << "Enter your score " << i << " : ";
		cin >> num;
		if(num < 0 || num > 5){
			cout << "Enter your score " << i << " : ";
			cin >> num;
		}
		index[i] = num;*/
	}
	cout << "==============================================" << endl;
	for(int j = 1;j <= n;j++){
		cout << "Student "<< j << " score is " << index[j] << " point. " << endl;
	}
}
