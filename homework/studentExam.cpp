#include <iomanip>
#include <ios>
#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
void getData();
void averageData();
void displayData();

struct student {
        int Id;
        string stdName;
        float percent1,percent2,percent3,stdTotalScore;  
};
bool sortData(student stdTotalScoreA,student stdTotalScoreB){
        if (stdTotalScoreA.stdTotalScore > stdTotalScoreB.stdTotalScore){
          return true;
        } return false;
}
    struct student stdInfo[20];
    int highScore;
    int stdId,countSumpercent = 0;
    float stdScore,averageTotalScore,stdTotalScore2,sumpercent1,sumpercent2,sumpercent3,averageSumpercent1,averageSumpercent2,averageSumpercent3;
    float countStdTotalScore = 0;
int main() {
    getData();
    averageData();
    sort(stdInfo, stdInfo + 6, sortData);
    displayData();
    return 0;
}

void getData(){
    for (int i = 0; i <= 5; i++) {
          cout << "Enter your student id : ";
          cin >> stdInfo[i].Id;
          cout << "Enter your student name : ";
          cin >> stdInfo[i].stdName;
          do {
          cout << "Enter your student test1 (25%) : ";
          cin >> stdInfo[i].percent1;
          }while (stdInfo[i].percent1 > 25);
          do {
          cout << "Enter your student test2 (25%) : ";
          cin >> stdInfo[i].percent2;
          }while (stdInfo[i].percent2 > 25);
          do {
          cout << "Enter your student test3 (50%) : ";
          cin >> stdInfo[i].percent3;
          }while (stdInfo[i].percent3 > 50);
    }
}

void averageData(){
    for (int i = 0; i <= 5; i++) {
           sumpercent1 += stdInfo[i].percent1;
           sumpercent2 += stdInfo[i].percent2;
           sumpercent3 += stdInfo[i].percent3;
           countSumpercent++;
    }
    averageSumpercent1 = sumpercent1/countSumpercent;
    averageSumpercent2 = sumpercent2/countSumpercent;
    averageSumpercent3 = sumpercent3/countSumpercent;
    for (int i = 0; i <= 5; i++) {
           stdInfo[i].stdTotalScore = (stdInfo[i].percent1 + stdInfo[i].percent2 + stdInfo[i].percent3);
           stdTotalScore2 += (stdInfo[i].percent1 + stdInfo[i].percent2 + stdInfo[i].percent3);
           countStdTotalScore++;
    }
    averageTotalScore = stdTotalScore2/countStdTotalScore;
}

void displayData(){
    cout << "----------------------------------------------------------------------------------------------------" << endl;
    cout << "No.\t" << "Id\t" << "Name\t" << "test1(25%)\t" << "test2(25%)\t" << "test3(50%)\t" << "total(100%)" << endl;
    cout << "----------------------------------------------------------------------------------------------------" << endl;
    for (int i = 0,count = 1; i <= 5; i++) {
            cout << fixed << setprecision(2);
            cout << count << "\t" << stdInfo[i].Id << "\t" << stdInfo[i].stdName  << "\t" << stdInfo[i].percent1 << "\t\t" << stdInfo[i].percent2 << "\t\t" << stdInfo[i].percent3 << "\t\t" << stdInfo[i].stdTotalScore << endl;
            count++;
    }
    cout << "----------------------------------------------------------------------------------------------------" << endl;
    cout << "Average of mark" << "\t\t" << averageSumpercent1 << "\t\t" << averageSumpercent2 << "\t\t" << averageSumpercent3 << "\t\t" << averageTotalScore;

}
