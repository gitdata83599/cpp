#include<iostream>
using namespace std;

//using struct
struct Time
{
    private:
    int day;
    
    int month;
    int year;

    public:
    void initDate()
    {  
        int day=1;
        int month=1;
        int year=1;
    }
    void printDateOnConsole()
     {
      cout<<"day"<<day<<"month"<<month<<"year"<<year<<endl;
     }
    void acceptDateFromConsole()

    {
     cout<<"enter day"<<day<<endl;
     cin>>day;
     cout<<"enter month"<<month<<endl;
     cin>>month;
     cout<<"enter year"<<year<<endl;
     cin>> year;
    }
    bool isLeapYear()
    {
     if(year %4==0 || year %400==0)
      return true;
      else
      return false;
    }
};

int main()
{   
    Time t;
    int choice;
    do
    {
    
    cout<<"0:initializeday"<<endl;
    cout<<"1:acceptDate"<<endl;
    cout<<"2:printDate"<<endl;
    cout<<"3.checkDate"<<endl;
    cout<<"4.exit"<<endl;
    cin>>choice;
    switch(choice)
    {
        case 1:
        t.initDate();
        break;

        case 2:
        t.printDateOnConsole();
        break;

        case 3:
        t.acceptDateFromConsole();
        break;

        case 4:
        t.isLeapYear();
        break;

        default :
        break;
    }
    }while(choice =4);
    return 0;
}