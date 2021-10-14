// Creator By
// 6406021410021 Kamolchai Suparojanee กมลชัย สุภโรจนี
// 6406021420034 jetsada saetan เจษฎา แซ่ตั๊น
// 6406021420239 Apinya Singha อภิญญา สิงหา
// 6406021410055 นายอนุวิท ศรีชัยทัศน์  Anuwit  Srichaithat
#include <iostream>
#include <iomanip>
#include <string.h>
using namespace std;
int main()
{
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

    // loop รับค่าและตรวจสอบคะแนน
    for(int i = 0;i <= 14;i++)
    {
        cout <<"["<<count<<"] " <<"Enter student name and surname : ";
        cin >> std_name[i] >> std_surname[i];

        cout << "Enter in room point :";
        cin >> room[i];

        while (room[i] < 0 || room[i] > 5)
        {
            cout << "Enter in room point :";
            cin >> room[i];
        }

        cout << "Enter in homework point :";
        cin >> homework[i];
        while (homework[i] < 0 || homework[i] > 25)
        {
            cout << "Enter in homework point :";
            cin >> homework[i];
        }

        cout << "Enter in test point :";
        cin >> test[i];
        while (test[i] < 0 || test[i] > 20)
        {
            cout << "Enter in test point :";
            cin >> test[i];
        }

        cout << "Enter in midterm point :";
        cin >> midterm[i];
        while (midterm[i] < 0 || midterm[i] > 30)
        {
            cout << "Enter in midterm point :";
            cin >> midterm[i];
        }

        cout << "Enter in final point :";
        cin >> final[i];
        while (final[i] < 0 || final[i] > 30)
        {
            cout << "Enter in final point :";
            cin >> final[i];
        }
        // cout << std_name[i]<<endl;
        // cout << room[i]<<endl;
        // cout << homework[i]<<endl;
        // cout << test[i]<<endl;
        // cout << midterm[i]<<endl;
        // cout << final[i]<<endl;

        sum[i] = room[i]+homework[i]+test[i]+midterm[i]+final[i];
        //cout << sum[i];
        if(sum[i] > 80){
            grade[i] = 'A';
        }else if(sum[i] > 70){
            grade[i] = 'B';
        }else if(sum[i] > 60){
            grade[i] = 'C';
        }else if(sum[i] >50){
            grade[i] = 'D';
        }else grade[i] = 'F';
   count++;
    }
    cout << "|=============================================================|\n";
    cout << "|\t|No.|\t|     Name-Surname     |\t|point|\t|Grade|\t\n";
    cout << "|=============================================================|\n";

    // loop ปริ้นตาราง
    count -=15;
    count = 1;
    for(int i = 0;i <= 14;i++)
    {
        cout <<"|"<<"\t"<<"["<<count<<"]"<<"\t" <<std_name[i] <<"            "<<std_surname[i]<< "\t" << sum[i] << "\t" << grade[i] <<"     |"<< endl;
        count++;
    }
    cout << "|=============================================================|\n";
}