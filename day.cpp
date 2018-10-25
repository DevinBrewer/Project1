/*
  Date: 10/24/18
  Name: Devin Brewer
  Desc: COSC_2030 Project #1; Blood Sugar
        day.cpp

  This is the driver class for day.h
*/

#include "day.h"

/* --- Methods --- */
Day::Day() {
  sum = 0;
  max = 0;
  min = 0;
  count = 0;
}

void Day::summary() {
  cout << "The daily sum so far is: " << sum << endl;
  cout << "The daily max so far is: " << max << endl;
  cout << "The daily min so far is: " << min  << endl;
  cout << "The number of readings so far is: " << count << endl;
}
