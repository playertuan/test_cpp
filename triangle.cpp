
// User input program to tell if a triangle 
// is equilateral, isosceles, or scalene
#include <iostream>
#include <string>
using namespace std;

// create enums for the three types of triangles
enum Type { equilateral, isosceles, scalene };

// helper function to return the triangle Type
Type getTriangleType(int,int,int);

int main()
{
   // variable to hold the side of the triangle
   int side1 = 0;
   int side2 = 0;
   int side3 = 0;

	   cout << "Please enter 3 integers for the sides of the triangle: ";
	   cin >> side1 >> side2 >> side3;

	   //cout << "You entered " << side1 << " " << side2 << " " << side3 << endl;

       Type type = getTriangleType(side1,side2,side3);

       switch(type)
       {
          case equilateral:
             cout << "equilateral" << endl;
             break;
          case isosceles:
             cout << "isosceles" << endl;
             break;
          case scalene:
             cout << "scalene" << endl;
             break;
          default:
             cout << "unknown" << endl; 
       }
}

// args: side1, side2, side3: the sides of the triangle
// return: int: the type of traiangle
Type getTriangleType(int side1, int side2, int side3)
{
   if ((side1 == side2) && (side2 == side3))
      return equilateral;

   if ((side1 == side2) || (side2 == side3) || (side1 == side3))
      return isosceles;

   if ((side1 != side2) && (side2 != side3) && (side1 != side3))
      return scalene;
}

// At first I had getTriangleType just print out the type and return.
// But then I switch it up to return enums so I can unit test it better
// It is hard to unit test console output. So I made the function just
// return the enume Type. The design choice to let the function do
// one thing and do it every well, which is to classify the triangle type
// and not worry about printing out the type into the console. 
