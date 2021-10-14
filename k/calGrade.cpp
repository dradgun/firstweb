// Creator By : Date 24/9/2021
// 6406021410021 Kamolchai Suparojanee กมลชัย สุภโรจนี
// 6406021420034 Jetsada Saetan เจษฎา แซ่ตั๊น
// 6406021420239 Apinya Singha อภิญญา สิงหา
// 6406021410055 Anuwit  Srichaithat นายอนุวิท ศรีชัยทัศน์
#include <iomanip>
#include <iostream>
#include <string.h>

using namespace std;
int main() {
  const float WIDTH = 9.5;
  int stdnum[15];
  string std_name[15];
  string std_surname[15];
  int room[15];
  int homework[15];
  int midterm[15];
  int final[15];
  int sum[15];
  int test[15];
  char grade[15];
  int i;
  int count = 1;

  // loop input socre and condition of score
  for (int i = 0; i <= 14; i++) {
    cout << "[" << count << "] "
         << "Enter student name and surname : ";
    cin >> std_name[i] >> std_surname[i];

    cout << "Enter in room point : ";
    cin >> room[i];

    while (room[i] < 0 || room[i] > 5) {
      cout << "Enter in room point : ";
      cin >> room[i];
    }

    cout << "Enter in homework point : ";
    cin >> homework[i];
    while (homework[i] < 0 || homework[i] > 15) {
      cout << "Enter in homework point : ";
      cin >> homework[i];
    }

    cout << "Enter in test point : ";
    cin >> test[i];
    while (test[i] < 0 || test[i] > 10) {
      cout << "Enter in test point : ";
      cin >> test[i];
    }

    cout << "Enter in midterm point1 : ";
    cin >> midterm[i];
    while (midterm[i] < 0 || midterm[i] > 30) {
      cout << "Enter in midterm point : ";
      cin >> midterm[i];
    }

    cout << "Enter in final point : ";
    cin >> final[i];
    while (final[i] < 0 || final[i] > 30) {
      cout << "Enter in final point : ";
      cin >> final[i];
    }

    sum[i] = room[i] + homework[i] + test[i] + midterm[i] + final[i];

    if (sum[i] >= 80) {
      grade[i] = 'A';
    } else if (sum[i] >= 70) {
      grade[i] = 'B';
    } else if (sum[i] >= 60) {
      grade[i] = 'C';
    } else if (sum[i] >= 50) {
      grade[i] = 'D';
    } else
      grade[i] = 'F';
    count++;
  }
  cout << "|" << setfill('=') << setw(62) << "|" << endl;
  cout << "||No.|\t|     Name-Surname     |    |  point  |  |  Grade  |  |\n";
  cout << "|" << setfill('=') << setw(62) << "|" << endl;

  // loop print table of score
  count = 1;
  cout << setfill(' ');
  for (int i = 0; i <= 14; i++) {
    cout << "| " << setw(WIDTH - 7) << count++;
    cout << "  " << setw(WIDTH + 3) << std_name[i];         
    cout << "  " << setw(WIDTH - 2) << std_surname[i];
    cout << "  " << setw(WIDTH) << sum[i];
    cout << "  " << setw(WIDTH) << grade[i];
    cout << "  " << endl;
    cout << "|=============================================================|\n";
  }
}