/// Q1. Write a class to find volume of a Cylinder by using following members. (volume of
// Cylinder=3.14 * radius * radius *height) ( use static wherever needed. hint-PI)
// Class having following member functions:
// Cylinder()
// Cylinder(double radius, double height)
// getRadius()
// setRadius()
// getHeight()
// setHeight()
// getVolume()
// printVolume()
// Initialize members using constructor member initializer list.
// Optional – Use the Modular Apporach

#include <iostream>
using namespace std;
class Cylinder
{
private:
    double radius;
    static const double PI;
  
    double height;

public:
    Cylinder()
    {
        radius = 1;
        height = 1;
        // cout << "\n default constructor \n";
    }

    Cylinder(double radius, double height)
    {
        this->radius = radius;
        this->height = height;

        
    }

    double getRadius()
    {
        return radius;
    }
    void setRadius(double radius)
    {
        this->radius = radius;
    }

    double getHeight()
    {
        return height;
    }
    static double getPI()
    {
        return PI;
    }
    void setHeight(double height)
    {
        this->height = height;
    }
    double getVolume()
    {
        return PI * radius * radius * height;
    }
    void printVolume()
    {
        cout << "Radius of cylinder = " << getRadius() << endl;
        cout << "height of cylinder  = " << getHeight() << endl;
        cout << "volume of cylinder  = " << getVolume() << endl;
    }
};
const double Cylinder::PI = 3.14;
// Cylinder::getPI();
int main()
{
    int choice = 0;
    Cylinder c1;
    do
    {

        cout << "\nSELECT YOUR CHOICE\n";
        cout << "\n HERE IS THE LIST :- ";
        cout << "\n1.Calculate Volume with default values ...";
        cout << "\n2. Calculate Volume with radius and height ...";
        cout << "\n3. display volume of the cylinder.....";
        cout << "\n4. Exit ..\n";
        cin >> choice;
        switch (choice)
        {
        case 1:
        {
            c1.printVolume();
            break;
        }
        case 2:
        {
            double radius, height;
            cout << "\n Enter the radius :";
            cin >> radius;
            c1.setRadius(radius);
            cout << "\n Enter the height :";
            cin >> height;
            c1.setHeight(height);
            cout << "\n volume = " << c1.getVolume();

            break;
        }
        case 3:
        {
            c1.printVolume();
            break;
        }
        case 4:
            cout << "\nthank uhh \n";
            break;
        default:
            cout << "\nwrong choice entered ! ! ! ! ! \n";
            cout << "\nenter the choice from the list 1-4 : ";
            break;
        }
    } while (choice != 4);

    return 0;
}