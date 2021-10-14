#include<iostream>
using namespace std;



int main(){
	int count = 0;
    int n = 0,rumNum = 1,set = 0;
	cin >> n;
	for(int i=1;i<=n;i++){
		for(int j = 1;j<=i;j++){
			if(i % 1 == 0){
				if(i % j == 0){
					count++;
				}
			}

   		}
   		if(i == 1){
   			cout << 1 << " ";
		}
		if(count > 2){
			cout << i << " ";
		}
		count = 0;

    }

	
}
