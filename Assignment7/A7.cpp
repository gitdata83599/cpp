#include <iostream>
using namespace std;

class Employee
{
private:
    int id;
    double salary;

public:
    Employee()
    {
        cout << "Inside Employee()" << endl;
    }
    Employee(int id, double salary)
    {
        cout << "Inside Employee(int,double)" << endl;
    }
    virtual void accept()
    {
        cout << "Enter the empid - ";
        cin >> id;
        cout << "Enter the salary - ";
        cin >> salary;
    }
    virtual void display()
    {
        cout << "Id - " << id << endl;
        cout << "Salary - " << salary << endl;
    }
    virtual ~Employee()
    {
        cout << "~Employee()" << endl;
    }
};

class Manager : virtual public Employee
{
private:
    double bonus;

protected:
    void acceptManager()
    {
        cout << "Enter the bonus - ";
        cin >> bonus;
    }
    void displayManager()
    {
        cout << "Bonus - " << bonus << endl;
    }

public:
    Manager()
    {
        cout << "Inside Manager()" << endl;
    }
    Manager(int id, double salary, double bonus)
    {
        cout << "Inside Manager(int,double,double)" << endl;
    }
    void accept()
    {
        Employee::accept();
        acceptManager();
    }

    void display()
    {
        Employee::display();
        displayManager();
    }
    ~Manager()
    {
        cout << "~Manager()" << endl;
    }
};

class Salesman : virtual public Employee
{
private:
    double commission;

protected:
    void acceptSalesman()
    {
        cout << "Enter the Commission - ";
        cin >> commission;
    }
    void displaySalesman()
    {
        cout << "Commission - " << commission << endl;
    }

public:
    Salesman()
    {
        cout << "Inside Salesman()" << endl;
    }
    Salesman(int id, double salary, double commission)
    {
        cout << "Inside Salesman(int,double,double)" << endl;
    }
    void accept()
    {
        Employee::accept();
        acceptSalesman();
    }
    void display()
    {
        Employee::display();
        displaySalesman();
    }
    ~Salesman()
    {
        cout << "~Salesman()" << endl;
    }
};
class SalesManager : public Manager, public Salesman
{
public:
    SalesManager()
    {
        cout << "Inside Salesmanager()" << endl;
    }
    SalesManager(int id, double salary, double bonus, double commission)
    {
        cout << "Inside SalesManager(int,double,double,double)" << endl;
    }
    ~SalesManager()
    {
        cout << "~Salesmanager()" << endl;
    }
    void accept()
    {
        Employee::accept();
        acceptManager();
        acceptSalesman();
    }
    void display()
    {
        Employee::display();
        displayManager();
        displaySalesman();
    }
};

int main()
{
   Employee *arr[10]; 
   int index=0;
   int choice;
   int managerCount=0;
   int salesmanCount=0;
   int salesManagerCount=0;

   do 
   {
    cout<< "0.Exit"   <<endl;
    cout<< "1 .Accept Employee " <<endl;
    cout<< "2 .display the count of all employees with respect todesignation " <<endl;
    cout<< "3 .display all manager " <<endl;
    cout<< "4 .display all salesman " <<endl;
     cout<< "5 .display all salesManagers " <<endl;
    cin>>choice;
    switch(choice)
    {
        case 0:
        cout<<"thank you "<<endl;
        break;

        case 1:
        if(index<10)
        {
            int x;
            cout<<"enter choice of  "<<endl;
            cout<<"press 1 for manager "<<endl;
            cout<<"press 2 for salesman "<<endl;
            cout<<"press 1 for salesManager "<<endl;
            cin>>x;

            if(x==1){
            arr[index]= new Manager;
            arr[index]->accept();
            index++;
            managerCount++;
            }
           else if(x==2){
            arr[index]= new Salesman;
            arr[index]->accept();
            index++;
            salesmanCount++;
            }
           else if(x==3){
            arr[index]= new SalesManager;
            arr[index]->accept();
            index++;
            salesManagerCount++;
            }
        }
        break;

        case 2:
        cout<<"***************"<<endl;
        cout<<"the manager count :"<<managerCount<<endl;
        cout<<"the salesman count :"<<salesmanCount<<endl;
        cout<<"the salesmanager count :"<<salesManagerCount<<endl;
        break;

        case 3:
        for(int i=0;i<index;i++)
        {
            if(typeid(*arr[i])==typeid(Manager)){
                arr[i]->display();
                cout<<"*********"<<endl;

            }
        }
    
    break;

    case 4:
        for(int i=0;i<index;i++)
        {
            if(typeid(*arr[i])==typeid(Salesman)){
                arr[i]->display();
                cout<<"*********"<<endl;

            }
        }
    
    break;

    case 5:
        for(int i=0;i<index;i++)
        {
            if(typeid(*arr[i])==typeid(SalesManager)){
                arr[i]->display();
                cout<<"*********"<<endl;

            }
        }
        break;

        case 6:
        for(int i=0;i<index;i++){
        arr[i]->display();
        cout<<"**********"<<endl;
        }
        break;

        default :
        cout<<"invalid choice "<<endl;
        break;
    }

    }while(choice !=0);

    for(int i=0;i<index;i++){
        delete arr[i];
        arr[i] =NULL;
    }
    
    return 0;
    
   
}

        