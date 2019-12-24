/*
project euler problem 9
*/
#include <iostream>

bool isTriplet(int a, int b, int c){
  if (a*a + b*b == c*c) {
    return true;
  }
  return false;
}

bool equalsANum(int a, int b, int c, int num){
  if (a + b + c == num) {
    return true;
  }
  return false;
}

int main(int argc, char const *argv[]) {
  int num = 1000;
  for (size_t c = 1; c < num/2; c++) {
    for (size_t b = 1; b < c; b++) {
      for (size_t a = 1; a < b; a++) {
        if (isTriplet(a, b, c) && equalsANum(a, b, c, num)) {
          std::cout << "(" << a << "," << b << "," << c << ")" << '\n';
          std::cout << a*b*c << '\n';
        }
      }
    }
  }
  return 0;
}
