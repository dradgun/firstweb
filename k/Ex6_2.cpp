#include <iostream>
using namespace std;

int main()
{
    int score, max, count = 1;
    while(score != -1){
        cout << "Midterm Score Student " << count << " : ";
        cin >> score;
        count++;
        if(score > max)
        {
            max = score;
        }
    }
    cout << "Max Score = " << max;
    return 0;
}