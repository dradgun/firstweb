#include <cstring>
#include <iostream>
#include <string.h>
using namespace std;

void isPalindrome(char number[]);
int main() {
  int G;
  char letter[100] = {};
  cout << "Enter your text : ";
  cin >> letter;
  G = strlen(letter) - 1;
   for (int i = 0; i <= strlen(letter)-1; i++) {
          cout << letter[i] << " = "  << letter[G] << endl;
          G--;
   }
  isPalindrome(letter);
  return 0;
}

void isPalindrome(char number[]) {
  bool flag = true;
  int G = (strlen(number) - 1);
  for (int i = 0; i <= G; i++) {
    if (number[i] != number[G]) {
      flag = false;
    }
    G--;
  }
  if (flag == false) {
    cout << "This is not palindrome text " << endl;
  } else {
    cout << "This is palindrome text ";
  }
}