#include <iostream>
#include <ios>
#include <iomanip>
#include <stdlib.h>
using namespace std;

void random1(int random[4], int &votes2);
int main()
{
    int random[4];
    int votes2 = 0;
    int totalVotes;
    int chairman;
    int percentVotes, percentVotes2, votesNumber = 0, notVotes, percentNotVote;
    const float numberOfRightStd = 500;
    cout << "Enter number student chairman : ";
    cin >> chairman;
    cout << "Number of right student : " << numberOfRightStd << endl;
    srand((unsigned int)time(0));
    votesNumber = (rand() % 500);
    votes2 = votesNumber;
    percentVotes2 = votesNumber;
    percentVotes = ((votesNumber * 100) / numberOfRightStd);
    cout << "Number of Votes : " << votesNumber << " = " << fixed << setprecision(1) << percentVotes << "%" << endl;
    notVotes = numberOfRightStd - votesNumber;
    percentNotVote = ((notVotes * 100) / numberOfRightStd);
    cout << "Number of not Votes : " << notVotes << " = " << percentNotVote << "%" << endl;
    cout << "Result of election chairman" << endl;
    cout << "---------------------------" << endl;
    cout << "No.\tVotes\tPercent (%)" << endl;
    random1 (random, votes2);
    totalVotes = random[4] + votes2;
    cout << "1"
         << "\t" << random[0] << "\t" << float(((random[0] * 100) / percentVotes2)) << "%" << endl;
    cout << "2"
         << "\t" << random[1] << "\t" << float(((random[1] * 100) / percentVotes2)) << "%" << endl;
    cout << "3"
         << "\t" << random[2] << "\t" << float(((random[2] * 100) / percentVotes2)) << "%" << endl;
    cout << "4"
         << "\t" << random[3] << "\t" << float(((random[3] * 100) / percentVotes2)) << "%" << endl;
    cout << "5"
         << "\t" << totalVotes << "\t" << float(((totalVotes * 100) / percentVotes2)) << "%" << endl;
    cout << "---------------------------" << endl;
    cout << "Total\t" << percentVotes2 << "\t" << ((percentVotes2 * 100) / percentVotes2) << "%" << endl;
    return 0;
}
void random1(int random[4], int &votes2)
{
    for (int i = 0; i < 5; i++)
    {
        random[i] = ((rand()) % votes2);
        votes2 = votes2 - random[i];
    }
}