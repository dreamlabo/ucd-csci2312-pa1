//Todd Labo
//point..cpp
//CSCI 2312
//Program Assignment #1

#include <cmath>  //For square root function
#include "point.h"

// Default constructor
// Initializes the point to (0.0, 0.0, 0.0)
Point::Point()
{
  x = 0.0;
  y = 0.0;
  z = 0.0;
}

// Constructor
// Initializes the point to (initX, initY, initZ)
Point::Point(double initX, double initY, double initZ)
{
  x = initX;
  y = initY;
  z = initZ;
}

// Destructor
// No dynamic allocation, so nothing to do; if omitted, generated automatically
Point::~Point()
{
  // no-op
}

// Mutator methods
// Change the values of private member variables
void Point::setX(double newX)
{
  x = newX;
}

void Point::setY(double newY)
{
  y = newY;
}

void Point::setZ(double newZ)
{
  z = newZ;
}

// Accessors
// Return the current values of private member variables
double Point::getX() {
  return x;
}

double Point::getY() {
  return y;
}

double Point::getZ() {
  return z;
}

// Calculate the distance from one point to another point.
double Point::getDistance(Point &point1)
{
  double xDistance = x - point1.x;
  double yDistance = y - point1.y;
  double zDistance = z - point1.z;
  return sqrt(xDistance * xDistance + yDistance * yDistance + zDistance * zDistance);
}


