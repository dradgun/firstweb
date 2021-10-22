#include <iostream>
#include <iomanip>
#include <stdlib.h>
using namespace std;

void randVotes(/* float votes,int chairmanAmount */);

int main() {
    int width = 7,count;
    int chairman;
    float votes,notVotes;
    int presidentVotes[] = {};
    const float numberOfRightStd = 500;
    cout << "Enter number student chairman : ";
    cin >> chairman;
    presidentVotes[chairman];
    cout << "Number of right student : " << numberOfRightStd << endl;
    srand((unsigned int)time(0));
    votes = (rand() % 500);
    cout << "Number of Votes : ";
    votes = ((votes * 100)/numberOfRightStd);
    cout << "= " << fixed << setprecision(1) << votes << "%" << endl;
    cout << "Number of not Votes : ";
    notVotes = numberOfRightStd - votes;
    notVotes = ((notVotes * 100)/numberOfRightStd);
    cout << "= " << fixed << setprecision(1) << notVotes << "%" << endl;

    cout << "Result of election chairman" << endl;
    cout << "---------------------------" << endl;
    cout << "No.\tVotes\tPercent (%)" << endl;
    cout << "---------------------------" << endl;
    cout << "---------------------------" << endl;
    randVotes();
    return 0;

} 

void randVotes(/* float votes,int chairmanAmount */) {
      int votes = 420;
      int random1;
      int presidentVotes[100] = {};
      for (int i = 0; i <= 100; i++) {
           random1 = (rand() % votes);
           presidentVotes[i] = random1;
           votes -= random1;
           }
      cout << presidentVotes[0] << endl;
      cout << presidentVotes[1] << endl;
      cout << presidentVotes[2] << endl;
      cout << presidentVotes[3] << endl;
}