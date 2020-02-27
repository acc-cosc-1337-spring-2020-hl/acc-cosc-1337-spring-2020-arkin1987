//write include statemetns
#include "rectangle.h"
#include <iostream>
#include <vector>
using std::cout;
using std::vector;
/*
Create a vector of rectangles
Add 3 Rectangle classes to the vector:
Width	Height		Area
  4		 5			  20
 10		10			 100
100		10			1000
Iterate the vector and display the Area for each Rectangle on one line and the total area for the
3 rectangles.
*/
int main()
{
	rectangle rectangle1(4, 5), rectangle2 (10,10), rectangle3(100,10);
	cout << rectangle1.get_area()<<"\n"<< rectangle2.get_area()<<"\n" << rectangle3.get_area()<<"\n";
	int totalarea;
	totalarea = rectangle1.get_area() + rectangle2.get_area() + rectangle3.get_area();
	cout << "Sum of areas:"<< totalarea;

	
	return 0;
}