
/*
  Date: 10/24/18
  Name: Devin Brewer
  Desc: COSC_2030 Project #1; Blood Sugar
        main.cpp

  This file will contain the main function and handle all subprograms
*/


// Add the necessary imports
#include <iostream>
using namespace std;

// Include the day class
#include "day.h"

int main() {

  // Create a day and test it
  Day d;

  d.sum = 10;
  d.max += 10;

  cout << d.sum << endl;
  cout << d.max << endl;

  return 0;
}
