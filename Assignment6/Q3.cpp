#include<iostream>
using namespace std;

class Employee
{
private:
    int id;
    double salary;

public:
    Employee(): Employee(1,1)
    {
        // id = 1;
        // salary = 1000;
    } 

    Employee(int id, double salary)
    {
        this->id = id;
        this->salary = salary;
    }       

    void setId(int id)
    {
        this->id = id;
    }

    int getId()
    {
        return id;
    }
    void setSalary(double salary)
    {
        this->salary = salary;
    }

    double getSalary()
    {
        return salary;
    }

    void acceptEmployee()
    {
        cout << "Enter Empid- " << endl;
        cin >> id;
        cout << "Enter Salary- " <<endl;
        cin >> salary;
    }

    void displayEmployee()
    {
        cout << "Empid- " << id << endl;
        cout << "Salary- " << salary << endl;
    }
};


class Manager:Employee
{
private:
    double bonus; 

public:
    Manager(): Manager(1,5000,2000)
    {

    }       

    Manager(int id, double salary, double bonus)
    {
        this->bonus = bonus;
    }

    void setbonus(double bonus)
    {
        this->bonus = bonus;
    }

    double getbonus()
    {
        return bonus;
    }

    void acceptManager()
    {
        Employee::acceptEmployee();
        cout << "Enter bonus- ";
        cin >> bonus;
    }

    void displayManager()
    {
        Employee::displayEmployee();
        cout << "Bonus- " << bonus << endl;
    }
};


class Salesman:Employee
{
private:
    double commission;

public:
    Salesman():Salesman(1,10000,1500)
    {

    }  

    Salesman(int id,double salary,double commission)
    {
        this->commission = commission;
    }  

    void setCommission(double coomission)
    {
        this->commission = commission;
    }

    double getCommission()
    {
        return commission;
    }

    void accept()
    {
        cout << "Enter Commission- ";
        cin >>commission;
    }

    void display()
    {
        cout << "Commission- " << commission << endl;
    }

    void acceptSalesman()
    {
        Employee::acceptEmployee();
        accept();
    }

    void displaySalesman()
    {
        Employee::displayEmployee();
        display();
    }
};

class SalesManager:public Manager,public Salesman
{
public:
    SalesManager(double bonus)
    {
        Manager::getbonus();
        Salesman::getCommission();
    }

    SalesManager(int id,double salary,double commission)
    {
        Manager::getbonus();
        Salesman::getCommission();
    }

    void accept()
    {
        //Employee::acceptEmployee();
        Manager::acceptManager();
        Salesman::acceptSalesman();
    }

    void display()
    {
        //Employee::displayEmployee();
        Manager::displayManager();
        Salesman::displaySalesman();
    }
};

int main()
{
    // Employee *ptr = new Employee();
    // ptr->acceptEmployee();
    // ptr->displayEmployee();

    // Manager *mptr = new Manager();
    // mptr->acceptManager();
    // mptr->displayManager();

     Salesman *sptr = new Salesman();
     sptr->acceptSalesman();
     sptr->displaySalesman();

    // SalesManager *smptr = new SalesManager();
    // smptr->accept();
    // smptr->display();

}