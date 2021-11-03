#include <iostream>
#include <cstring>
using namespace std;

void isPalindrome(char data[],bool &check);
int main()
{
   bool check;
   char data[] = {};
   /*int i,n;*/

   cout << "Enter text : ";
   cin >> data;
   isPalindrome(data,check);
   /* n = strlen(data3);
    fc=data3[0];
    lc=data3[n-1];

    cout << n <<endl;
    cout << "Frist = " << fc <<endl;
    cout << "Last = " << lc <<endl;*/
   if (check == true)
   {
      cout << "you Text is palindrom " << endl;
   }
   else if (check == false)
   {
      cout << "you Text is not palindrom " << endl;
   }

   return 0;
}
void isPalindrome(char data[],bool &check)
{

   char fc, lc;
   int n;

   n = strlen(data);

   if (n % 2 == 0)
   {
      for (int i = 0; i < (n / 2) - 1;)
      {
         for (int e = n - 1; e > (n / 2) - 1;)
         {
            fc = data[i];
            lc = data[e];
            cout << fc << " = " << lc << endl;
            e--;
            i++;
         }
      }
      if (fc == lc)
      {
         /*cout << "you Text is palindrom " <<endl;*/
         check = true;
         return;
      }
      else if (fc != lc)
      {
         /*cout << "you Text is not palindrom " <<endl;*/
         check = false;
         return;
      }
   }

   else if (n % 2 == 1)
   {
      fc = data[0];
      lc = data[n - 1];
      cout << fc << " = " << lc << endl;
      if (fc == lc)
      {
         /* cout << "you Text is palindrom " <<endl;*/
         check = true;
         return;
      }
      else if (fc != lc)
      {
         /* cout << "you Text is not palindrom " <<endl; */
         check = false;
         return;
      }
   }
}
