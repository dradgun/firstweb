#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main(){
      string input, word;
   getline(cin, input);
   cin>>word;
    int cnt = 0;
 size_t pos = input.find(word,0);
 while (pos != string :: npos){
     cnt++;
     pos = input.find(word, pos+1);
 }
 cout<<cnt<<endl;

}