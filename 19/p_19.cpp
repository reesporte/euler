/*
project euler problem 19
*/
#include <iostream>

bool isLeapYear(int year){
  if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) {
    return true;
  }
  return false;
}

int getDaysInMonth(int month, int year){
  int months[] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
  if (month == 2 && isLeapYear(year)) {
    return 29;
  }
  return months[month-1]; // month - 1 bc it's in an array, index starts at 0
}

int sundayAsFirstOfMonth(int janDay, int year){
  /*
  given what day the 1st of january of any year is, counts the number of sundays
  that are the first of the month in that year
  mon = 0 ... sun = 6
  */
  int count  = 0;
  int months[13] = {0};
  months[1] = janDay;
  if (months[1] == 6) {
    count++;
  }

  for (int month = 2; month < 13; month++) {
    months[month] = (months[month-1] + getDaysInMonth(month-1, year)) % 7;
    if (months[month] == 6) {
      count++;
    }
  }
  return count;
}


int main(int argc, char const *argv[]) {
  int janDay[101] = {0};
  janDay[0] = 0;
  int count = 0;

  for (size_t i = 1; i < 101; i++) {
    if (janDay[i-1] == 6) {
      janDay[i] = 0;
    }
    else{
      janDay[i] = janDay[i-1] + 1;
    }
  }

  for (size_t i = 1901; i < 2001; i++) {
    count += sundayAsFirstOfMonth(janDay[i-1900], i);
  }

  std::cout << count << '\n';

  return 0;
}
