//============================================================================
// Name        : cse-274-lab1.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

// classes example
#include <iostream>
#include "rectangle.h"
using namespace std;


int main () {

	Rectangle rect;
	Rectangle *pRect;
	Rectangle rect2 = rect;
  rect.set_values (3,4);
  rect2.set-valuse(4,5);
  cout << "area: " << rect.area();
  return 0;
}
