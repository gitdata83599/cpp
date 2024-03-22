// Write a menu driven program to calculate volume of the box(length * width * height).
// Provide parameterless, parameterized(with 3 parameters) and single paramaterized constructor.
// Create the local objects in respective case and call the function to caluclate area.
// Menu options ->
// 1. Calculate Volume with default values
// 2. Calculate Volume with length,breadth and height with same value
// 3. Calculate Volume with different length,breadth and height values.
#include<iostream>
using namespace std;
class Box
{
    private:
    int length;
    int width;
    int height;

    public:
    Box()
    {
     length=1;
     width=1;
     height=1;   
    }
    Box(int length,int width,int height)
    {
        this->length=length;
        this->width=width;
        this->height=height;
    }
    Box(int value)
    {
    length=value;
     width=value;
     height=value;  
    }

    void display()
    {
        cout<<"calculate valumn :"<< length*width*height <<endl;
        
    }
};
int main()

{
    Box b1;
    Box b2(3,3,3);
    Box b3(3,4,5);
    b1.display();
    b2.display();
    b3.display();

    return 0;
}