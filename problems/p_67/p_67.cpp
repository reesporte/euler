/*
project euler problem 67
*/
#include <iostream>
#include <fstream>
#include <sstream>
#include <vector>
using namespace std;

vector<vector<int> > readTriangle(){
  ifstream fin("problems/p_67/triangle.txt");

  vector<vector<int> > lines;

  for( string line ; getline(fin,line);){
    stringstream ss(line);
    string number;
    vector<int> inner;

    while (getline(ss,number,' ')) {
      inner.push_back(stoi(number));
    }
    lines.push_back(inner);
  }

  return lines;
}

void printTrig(vector<vector<int> > tri){
  /*
  prints the triangle, helpful for debug
  */
  for (size_t i = 0; i < tri.size(); i++) {
    for (size_t j = 0; j < tri[i].size(); j++) {
        cout << tri[i][j] << '\t';
    }
    cout << '\n';
  }

}

int main(int argc, char const *argv[]) {
  vector<vector<int> > triangle = readTriangle();

  for (size_t i = triangle.size() - 1; i > 0; i--) {
    for (size_t j = 0; j < i; j++) {
      int left = triangle[i][j];
      int right = triangle[i][j+1];

      if (left > right) {
        triangle[i-1][j] += left;
      }
      else{
        triangle[i-1][j] += right;
      }
    }
  }

  cout << triangle[0][0] << endl;
  return 0;
}
