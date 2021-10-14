#include <iostream>
using namespace std;
int main()
{
int age = 0; /* Age of the applicant */
int college = 0; /* Code for college attended */
int subject = 0; /* Code for subject studied */
bool interview = false;
int time = 0;
/* Get data on the applicant */
cout << "What college? 1 = KKU, 2 = CU, 3 = other: ";
cin >> college;
cout << "What subject? 1 = Math, 2 = Physics, 3 = other: ";
cin >> subject;
cout << "How old is the applicant? ";
cin >> age;
/* Check out the applicant */
if((age>25 && subject==1) && (college==3 || college==1))
{ interview = true; time = 1; }
if(college==2 &&subject ==1)
{ interview = true; time = 2; }
if(college==1 && subject==2 && !(age>28))
{ interview = true; time = 3; }
if(college==2 && (subject==2 || subject==3) && age>25)
{ interview = true; time = 4; } 
if(interview)
cout << "Give 'em an interview "<< time << " times." << endl;
else
cout << "Reject 'em" << endl;
return 0;
} 
