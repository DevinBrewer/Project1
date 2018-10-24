
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
  // Define the main variables to be used
  Day dayArray[14];
  Week weekArray[2];

  // Create a day and test it
  Day d;

  d.sum = 10;
  d.max += 10;

  cout << d.sum << endl;
  cout << d.max << endl;

  //TODO: User interaction
  // Output relevant information to the user
  cout << "Controls:" << endl;
  cout << "D - Show current daily summary" << endl;
  cout << "W - Show current weekly summary" << endl;
  cout << "N - Move onto the next day (NOTE: Limited to 14 days)" << endl;
  cout << "Q - Prematurely quit (NOTE: All data will be lost)" << endl;

  // Continuously gather input from the user
  char charInput = '';
  while (toupper(charInput) != 'Q') {
      int intInput = 0;

      cin >> charInput;
      cin >> intInput;

      cout << "charInput: " << charInput << endl;
      cout << "intInput: " << intInput << endl;
  }

  return 0;
}
