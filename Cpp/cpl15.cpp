#include<iostream>
using namespace std;

string dayOfWeek(int dayNum)
{
    cout << " Enter any number fro 0 to 7 to get the day of a week : ";
    cin >> dayNum;
    string dayName;

    switch(dayNum)
    {
        case 1:
            dayName = "Monday";
        case 2:
            dayName = "Tuesday";
        case 3:
            dayName = "Wednesday";
        case 4:
            dayName = "Thursday";
        case 5:
            dayName = "Friday";
        case 6:
            dayName = "Saturday";
        case 7:
            dayName = "Sunday";
        default:
            cout << " Please enter a valid input";
        
    }
    return 0;
}

