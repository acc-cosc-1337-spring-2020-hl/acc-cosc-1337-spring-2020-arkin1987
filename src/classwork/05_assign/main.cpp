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
	vector <rectangle> rectangles{ rectangle(4,5), rectangle(10,10),
	rectangle(100,10) };
	for (auto rect : rectangles) {
		cout << rect.get_area(); // out of time
	}
	return 0;
}