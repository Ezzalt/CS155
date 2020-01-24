//**************************************
//  Name: Nayan Bhattacharyya
//  Course: CS 155 - Computer Science
//  Semester: 5th Semester
//  Due Date: 29th August
//  Assignment 3 - D :Write a program that will obtain the diameter of a circle (in inches) from the user, calculate the
//  circumference and the area of the circle, and output the results to the user.  Be sure to clearly
//  prompt the user and clearly label results that are displayed for the user for clear usability of the software.
//  Input:
//  Diameter of circle(unit inches), can contain fractional values
//  Output:
//  Area of circle(unit square inches), can contain fractional values
//  Circumference of circle(unit inches), can contain fractional values
//  Processing:
//  Start
//  Initialise variable diameter
//  prompt for value
//  Input value of diameter
//  Initialise variables area and circumference
//  Process as->
//  Area = Pi * diameter^2 / 4
//  Circumference = Pi * diameter
//**************************************
#include<iostream>
#include<cmath>
using namespace std;
int main(){
    double diameter = 0.0d;
    cout << "Input diameter of circle in inches: ";
    cin >> diameter;
    double area, circumference;
    circumference = M_PI * diameter;
    area = M_PI * pow(diameter,2) / 4;
    cout << "The circumference of circle " << circumference<<" inches and the area is "<< area <<" square inches"<< endl;

    return 0;
}
//**************************************
//  Sample input: [ezzalt@ezzalt-pc CS 155]$ ./a
//  Input diameter of circle in inches: 78
//  Output:
//  The circumference of circle 245.044 inches and the area is 4778.36 square inches
//  [execution end]
//**************************************
