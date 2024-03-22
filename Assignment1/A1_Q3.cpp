#include<iostream>
using namespace std;

class Student
{
    private:
    int Rollno;
    string name;
    double marks;

    public:
    void initStudent()
    {
     int Rollno=0;
     string name="";
     double marks=0.0;
    }
    void printStudentOnConsole()
    {
     cout<<"Rollno<<"<<Rollno<<"name"<<name<<"marks"<<marks<<endl;

    }
    void acceptStudentFromConsole()
    {
    cout<<"enter Rollno"<<Rollno<<endl;
    cin>>Rollno;
    cout<<"enter name"<< name<<endl;
    cin>>name;
    cout<<"enter marks"<<marks<<endl;
    cin>>marks;
    }
};
int main()
{
    Student s;
    int choice;
    do
    {

    
    
    cout<<"0:initialize"<<endl;
    cout<<"1:accept"<<endl;
    cout<<"2.disply"<<endl;
    cout<<"3.print"<<endl;
    cout<<"4.exit"<<endl;
    cin>>choice;

    switch(choice)
    {
        case 1:
        s.initStudent();
        printf("initStudent");
        break;

        case 2:
        s.printStudentOnConsole();
        printf("printStudentOnConsole");
        break;
         case 3:
         s.acceptStudentFromConsole();
         printf("acceptStudentFromConsole");
         break;

         case 4:
         printf("exit");

         default :
         printf("program copmplete");
         break;
    }
    
    } while(choice != 4);
    return 0;

} 