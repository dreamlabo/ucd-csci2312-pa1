//Todd Labo
//Main.cpp
//CSCI 2312
//PA 1

#include <iostream>
#include <iomanip>
#include <cmath>   //for square root function

#include "Point.h"

using namespace std;

//function Prototype
double computeArea(Point &, Point &, Point &);

int main(void)
{
    double x_Axis;
    double y_Axis;
    double z_Axis;
    int numberOfPoints = 0;

    cout << "This program will take in three points of a triangle from the user, " << endl;
    cout << "then output the area of the triangle. " << endl << endl;

    //get point 1 of triangle from user
    cout << " Please enter the X axis for point # " << numberOfPoints + 1 << ": " ;
    cin >> x_Axis;
    cout << endl;

    cout << " Please enter the Y axis for point # " << numberOfPoints + 1 << ": " ;
    cin >> y_Axis;
    cout << endl;

    cout << " Please enter the Z axis for point # " << numberOfPoints + 1 << ": " ;
    cin >> z_Axis;
    cout << endl;

    //Create first Point object
    Point point1(x_Axis,y_Axis, z_Axis);
    numberOfPoints++;

    //Get point 2 of triangle from user
    cout << " Please enter the X axis for point # " << numberOfPoints + 1 << ": " ;
    cin >> x_Axis;
    cout << endl;

    cout << " Please enter the Y axis for point # " << numberOfPoints + 1 << ": " ;
    cin >> y_Axis;
    cout << endl;

    cout << " Please enter the Z axis for point # " << numberOfPoints + 1 << ": " ;
    cin >> z_Axis;
    cout << endl;

    //Create second Point object
    Point point2(x_Axis,y_Axis, z_Axis);
    numberOfPoints++;

    //Get point 3 of triangle from user
    cout << " Please enter the X axis for point # " << numberOfPoints + 1 << ": " ;
    cin >> x_Axis;
    cout << endl;

    cout << " Please enter the Y axis for point # " << numberOfPoints + 1 << ": " ;
    cin >> y_Axis;
    cout << endl;

    cout << " Please enter the Z axis for point # " << numberOfPoints + 1 << ": " ;
    cin >> z_Axis;
    cout << endl;

    //Create third Point object
    Point point3(x_Axis,y_Axis, z_Axis);
    cout << endl;

    //call to the computeArea function
    cout  <<fixed << setprecision(2) << "The area of the triangle is : " << computeArea(point1, point2, point3);

    return 0;
}

//Function Definition
//Finds the area of the triangle using Heron's formula
double computeArea(Point &point1, Point &point2, Point &point3)
{
    double perimeter;
    double s;
    double area;
    double a,b,c;

    //Get distance of each side of the triangle
    a = point1.getDistance(point2);
    b = point2.getDistance( point3);
    c = point3.getDistance( point1);

    perimeter = a + b + c;

    s= perimeter/2;

    //Heron's Formula for area of a triangle
    cout << "The perimeter of the triangle is : " << perimeter << endl;
    return area= sqrt(s*(s - a)*(s - b)*(s - c));
}