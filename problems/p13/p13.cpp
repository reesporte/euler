/*
project euler problem 13
*/
#include <iostream>
#include <fstream>
#include <string>
#include <vector>
using namespace std;

void solution(){
  ifstream infile("./problems/p13/numbers.txt");
  string line;
  int solution = 0;
  vector<int> sum(50, 0);

  vector<vector<int> > lines;

  if (infile.is_open()) {
    while (getline(infile, line)) {
      vector<int> number;
      for (size_t i = 49; i > 0; i--) {
        int digit = line[i] - 48; //convert char to int
        number.push_back(digit);
      }
      int digit = line[0] - 48; // add last number (creates a seg fault if for loop includes 0 for some reason???)
      number.push_back(line[0] - 48);
      lines.push_back(number);
    }
  }

  for (size_t i = 0; i < lines.size(); i++) {
    std::vector<int> line = lines[i];
    for (size_t j = 0; j < line.size(); j++) {
      sum[j] += line[j]; // add each digit individually
      if (sum[j] >= 10) { // if it's bigger than ten in any place, increment the next place
        sum[j+1] += 1;
        sum[j] -= 10;
      }
    }
  }

  for (size_t i = sum.size(); i > 41; i--) {
    cout << sum[i];
  }
}

int main(int argc, char const *argv[]) {
  solution();
  return 0;
}
