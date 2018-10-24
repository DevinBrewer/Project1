/*
  Date: 10/24/18
  Name: Devin Brewer
  Desc: COSC_2030 Project #1; Blood Sugar
        day.h

  Header file to create a data structure for a days worth of information
*/

#ifndef DAY_h_
#define DAY_h_

// Create the class
class Day {
// NOTE: Currently security is not a concern, all variables will be defined as public instead of using getters and setters
public:
    /* --- Methods --- */
    Day();  // Default constructor

    /* --- Variables --- */
    int sum;  // Stores the running sum of numbers entered. TODO: Overflow
    int max;  // Stores the largest number entered
    int min;  // Stores the smallest number entered
    int count;  // Stores the total count of numbers entered
};

#endif
