// Q2. Write a class for Time and provide the functionality
// Time()
// Time(int h,int m,int s)
// getHour()
// getMinute()
// getSeconds()
// printTime()
// setHour()
// setMinute()
// setSeconds()
// Allocate the memory for the the object dynamically and test the functunalities using time ptr.

#include <iostream>
using namespace std;
class Time
{
private:
    int h;
    int m;
    int s;

public:
    Time()
    {
        h = 00;
        m = 00;
        s = 00;
    }

    Time(int h, int m, int s)
    {
        this->h = h;
        this->m = m;
        this->s = s;
        
    }

    int getHour()
    {
        return h;
    }
    int getMinute()
    {
        return m;
    }
    int getSeconds()
    {
        return s;
    }

    void setHour(int h)
    {
        this->h = h;
    }
    void setMinute(int m)
    {
        this->m = m;
    }

    void setSeconds(int s)
    {
        this->s = s;
    }

    void printTime()
    {
        cout << "Time in HH : MM : SS = " << getHour() << " : " << getMinute() << " : " << getSeconds() << endl;
    }
};

int main()
{
    Time *ptr;
    ptr = new Time;
    Time *ptr2 = new Time(12, 45, 30);
    ptr->printTime();
    ptr2->printTime();

    delete ptr;
    delete ptr2;

    ptr = NULL;
    ptr2 = NULL;

    return 0;
}

// int main1()
// {
//     int choice = 0;
//     Time t1;
//     do
//     {
//         cout << "\nSELECT YOUR CHOICE\n";
//         cout << "\n HERE IS THE LIST :- ";
//         cout << "\n1.default time ...";
//         cout << "\n2. enter hours , minutes, seconds  ...";
//         cout << "\n3. display Time.....";
//         cout << "\n4. Exit ..\n";
//         cin >> choice;
//         switch (choice)
//         {
//         case 1:
//         {
//             t1.printTime();
//             break;
//         }
//         case 2:
//         {
//             int h, m, s;
//             cout << "\n Enter the hr :";
//             cin >> h;
//             t1.setHour(h);
//             cout << "\n Enter the min :";
//             cin >> m;
//             t1.setMinute(m);
//             cout << "\n Enter the sec :";
//             cin >> s;
//             t1.setSeconds(s);
//             break;
//         }
//         case 3:
//         {
//             t1.printTime();
//             break;
//         }
//         case 4:
//             cout << "\nthank uhh \n";
//             break;
//         default:
//             cout << "\nwrong choice entered ! ! ! ! ! \n";
//             cout << "\nenter the choice from the list 1-4 : ";
//             break;
//         }
//     } while (choice != 4);
//     return 0;
// }