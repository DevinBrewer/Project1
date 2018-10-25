
/*
  Date: 10/24/18
  Name: Devin Brewer
  Desc: COSC_2030 Project #1; Blood Sugar
        main.cpp

  This file will contain the main function and handle all subprograms
*/

// Add the necessary imports
#include <iostream>
#include <string>
using namespace std;

// Include the day class
#include "day.h"
#include "week.h"

int main() {
  // Define the main variables to be used
  Day dayArray[14];
  short dayIndex = 0;
  Week weekArray[2];
  short weekIndex = 0;

  //TODO: User interaction
  // Output relevant information to the user
  cout << "Controls:" << endl;
  cout << "D - Show current daily summary" << endl;
  cout << "W - Show current weekly summary" << endl;
  cout << "N - Move onto the next day (NOTE: Limited to 14 days)" << endl;
  cout << "Q - Prematurely quit (NOTE: All data will be lost)" << endl;

  // Continuously gather input from the user
  string input = "a";
  while (input != "Q" && input != "q") {
    // Get input from the user
    cin >> input;

    // Parse the input based on character or numeric interaction
    char* sz;
    long convInput = strtol(input.c_str(), &sz, 10);

    if (!*sz) {
      // Input is an integer

    } else if (input.compare("D") == 0 || input.compare("d") == 0) {
      // Daily summary
      dayArray[dayIndex].summary();

    } else if (input.compare("W") == 0 || input.compare("w") == 0) {
      // Weekly summary
      weekArray[weekIndex].summary();

    } else if (input.compare("N") == 0 || input.compare("n") == 0) {
      // Next day
      if (dayIndex < 13) {
        dayIndex++;
      }

      // Check if week needs to be advanced
      if (dayIndex == 7) {
        weekIndex++;
      }

    } else {
      // No catch case, invalid input
      cout << "Invalid input..." << endl;
    }
  }

  cout << "Completed" << endl;
  return 0;
}
