// Area and Circumference of Circle

#include<iostream>
// This header file is used to handle the data from a file as input or output.
using namespace std;
// Namespace defines a library of terms. std is the standard library. Helps to avoid overlap of variables from different name libraries.
class AreaCirc
// I made mine using class.
{
    public:
        // This is defining the different formulas needed.
        float findArea(float d)
        {
            return (3.14*(d/2)*(d/2));
            // Formula for area, with variable name findArea.
        }
        float findCircum(float d)
        {
            return (d*3.14);
            // Formula for circumference, with variable name findCircum.
        }
};
int main()
{
    AreaCirc c;
    float dia, area, circum;
    cout<<"Enter the Diameter of Circle: ";
    cin>>dia;
    area = c.findArea(dia);
    // area = the function for findArea. This means that to calculate the area, use the formula mentioned in the findArea function on line 14.
    circum = c.findCircum(dia);
    // circum = the function for findCircum.This means that to calculate the circumference, use the formula mentioned in the findCircum function on line 19. 
    cout<<"\nArea of Circle = "<<area;
    // Display the result of the area calculation with the text "Area of Circle =" before it.
    cout<<"\nCircumference of Circle = "<<circum;
    // Display the result of the circumference calculation with the text "Circumference of Circle ="
    cout<<endl;
    //End the function.
    return 0;
    // Return 0 means that the program will execute successfully and do what it was intended to do.
}