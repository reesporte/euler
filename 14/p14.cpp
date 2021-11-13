/*
project euler problem 14

my decidedly Object Oriented solution

*/

#include <iostream>
#include <unordered_map>
using namespace std;

class solution {
public:
  unordered_map<long, long> map;
  long iterations;
  long number_of_elements;
  long largest_number;

  solution (int iterations){
    this->iterations = iterations;
    this->number_of_elements = 0;
    this->largest_number = 0;
  };

  void collatz(){
    for (size_t i = 0; i < this->iterations; i++) {
      long n = i;
      long count = 0;
      while (n > 1) {
        if (n % 2 == 0) {
          n = n/2;
          unordered_map<long, long>::iterator iter = map.find(n);
          if (iter != map.end()) {
            count += iter->second;
            n = -1;
          }
          else{
            count++;
          }
        }
        else{
          n = 3*n + 1;
          unordered_map<long, long>::iterator iter = map.find(n);
          if (iter != map.end()) {
            count += iter->second;
            n = -1;
          }
          else{
            count += 1;
          }
        }
      }
      map[i] = count;
      if (count > number_of_elements) {
        number_of_elements = count;
        largest_number = i;
      }
    }
    std::cout << number_of_elements << " " << largest_number << '\n';
  };
};

int main(int argc, char const *argv[]) {
  solution c = solution(1000000);
  c.collatz();
  return 0;
}
