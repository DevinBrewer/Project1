/*
  Date: 10/24/18
  Name: Devin Brewer
  Desc: COSC_2030 Project #1; Blood Sugar
        day.cpp

  This is the driver class for week.h
*/

#include "week.h"

/* --- Methods --- */
Week::Week() {
  sum = 0;
  max = 0;
  min = 0;
  count = 0;
  delta = 0;
}

void Week::summary() {
  cout << "The weekly sum so far is: " << sum << endl;
  cout << "The weekly max so far is: " << max << endl;
  cout << "The weekly min so far is: " << min << endl;
  cout << "The number of readings so far is: " << count << endl;
  cout << "The biggest delta so far is: " << delta << endl;
}
