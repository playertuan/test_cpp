
// User input program to tell if a triangle 
// is equilateral, isosceles, or scalene
#include <iostream>
#include <string>
using namespace std;

// helper function to return the triangle type
int getTriangleType(int,int,int);


int main()
{
   // variable to hold the side of the triangle
   int side1 = 0;
   int side2 = 0;
   int side3 = 0;

	   cout << "Please enter 3 integers for the sides of the triangle: ";
	   cin >> side1 >> side2 >> side3;
       getTriangleType(side1,side2,side3);
	   //cout << "You entered " << side1 << " " << side2 << " " << side3 << endl;
       cin.clear();
}

int getTriangleType(int side1, int side2, int side3)
{
   cout << "You entered " << side1 << " " << side2 << " " << side3 << endl;
   if ((side1 == side2) && (side2 == side3))
   {
      cout << "equilateral" << endl;
      return 0;
   }

   if ((side1 == side2) || (side2 == side3) || (side1 == side3))
   {
      cout << "isosceles" << endl;
      return 0;
   }

   if ((side1 != side2) && (side2 != side3) && (side1 != side3))
   {
      cout << "scalene" << endl;
      return 0;
   }
}
