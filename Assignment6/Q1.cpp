#include<iostream>
using namespace std;

class Date
{
private:
    int day;
    int month;
    int year;

public:
    Date()
    {
        day=1;
        month=1;
        year=1900;
    }    
    void acceptDate()
    {
        cout << "Enterday- ";
        cin >> day;
        cout << "Enter Month- ";
        cin >> month;
        cout << "Enter year- ";
        cin >> year;
    }

    void displayDate()
    {
        cout << day << "/" << month << "/" << year <<endl;
    }
};

class Person:Date
{
private:
    string name;
    string address;
    Date dob;

public:
    void acceptDate()
    {
        cout << "Enter person name- ";
        cin >> name;
        cout << "Enter address- ";
        cin >> address;
        cout << "Enter date of birth- ";
        dob.acceptDate();
    }    
    void displayPerson()
    {
        cout << "person's name- " << name << endl;
        cout << "Address- " << name << endl;
        cout << "Date of birth- " << endl;
    }
};

class employee:Person
{
private:
    int id;
    double salary;
    string dept;
    Date doj;
};

int main()
{

}
