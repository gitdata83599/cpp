// Write a class Address with data members (string building, string street, string city ,int pin)
// Implement constructors, getters, setters, accept(), and display() methods.
// Test the class functunalities by creating the object of class and calling all the functions.
#include<iostream>
using namespace std;
class Address
{
    private:
    string building;
    string street;
    string city;
    int pin;

    public:
    
    Address(string building,string street,string city,int pin)
    {this->building=building;
        this->street=street;
        this->city=city;
        this->pin=pin;
      
    }
    Address()
    {
    building="katkar nivas";
      street="lane 2";
      city="sangli";
      pin=315408;

    }
    void setBuilding(string building)
    {
        this->building=building;
        
    }
    string getBuilding()
    {
        return building;
    }

    void setStreet(string street)
    {
        this->street=street;

    }
    string getStreet()
    {
       return street;
    }
    void setCity(string city)
    {
        this->city=city;

    }
    string getCity()
    {
        return city;
    }
    void setPin(int pin)
    {
        this->pin=pin;

    }
    int getPin()
    {
        return pin;
    }
    void accept()
    {
     cout<<"accept our address detail :"<<endl;
     cout<<"building :"<<building;
     cin>>this-> building;
     cout<<"street :"<<street;
     cin >>this->street;
     cout<<"city :"<<city;
     cin >> city;
     cout<<"pin :"<<pin;
     cin >> this->pin;

    }
    void display()
    {
      cout<<"building "<<building<<endl;
      cout<<"street "<<street<<endl;
      cout<<"city "<<city<<endl;
      cout<<"pin "<<pin<<endl;

    }
};
int main()
{
    Address a1("katkar nivas","lane 2","sangli",315308);
    //a1.accept();
    a1.display();
    return 0;
}