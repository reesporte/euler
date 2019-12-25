/*
project euler problem 11
*/
#include <iostream>
#include <fstream>
#include <string>
#include <vector>
using namespace std;

vector<vector<int> > makeGrid(){
  ifstream infile("./problems/p11/numbers.txt");
  string lineFromFile;
  vector<vector<int> > grid;

  if (infile.is_open()) {
    int x = 0;
    while (getline(infile, lineFromFile)) {
      vector<int> line;
      int counter = 0;
      int num = 0;
      size_t pos = 0;
      while ((pos = lineFromFile.find(",")) != std::string::npos) {
          num = stoi(lineFromFile.substr(0, pos));
          line.push_back(num);
          lineFromFile.erase(0, pos + 1);
      }
      grid.push_back(line);
      x++;
    }
  }
  return grid;
}

int main(int argc, char const *argv[]) {
  vector<vector<int> > grid = makeGrid();

  long greatest = 0;
  long product = 0;

  for (int x = 0; x < 20; x++) {
    for (int y = 0; y < 20; y++) {
      if (y >= 3 && y < 16 && x < 16) {
        // look diagonal left
        product = grid[x][y] * grid[x+1][y-1] * grid[x+2][y-2] * grid[x+3][y-3];
        if (product > greatest) { greatest = product; }
        //look down
        product = grid[x][y] * grid[x+1][y] * grid[x+2][y] * grid[x+3][y];
        if (product > greatest){ greatest = product; }
        // look diagonal right
        product = grid[x][y] * grid[x+1][y+1] * grid[x+2][y+2] * grid[x+3][y+3];
        if (product > greatest){ greatest = product; }
        // look right
        product = grid[x][y] * grid[x][y+1] * grid[x][y+2] * grid[x][y+3];
        if (product > greatest){ greatest = product; }
      }
      else if (y >= 3 && x < 16) {
        // look diagonal left
        product = grid[x][y] * grid[x+1][y-1] * grid[x+2][y-2] * grid[x+3][y-3];
        if (product > greatest) { greatest = product; }
        //look down
        product = grid[x][y] * grid[x+1][y] * grid[x+2][y] * grid[x+3][y];
        if (product > greatest){ greatest = product; }
      }
      else if (y < 3 && x < 16) {
        //look down
        product = grid[x][y] * grid[x+1][y] * grid[x+2][y] * grid[x+3][y];
        if (product > greatest){ greatest = product; }
        // look diagonal right
        product = grid[x][y] * grid[x+1][y+1] * grid[x+2][y+2] * grid[x+3][y+3];
        if (product > greatest){ greatest = product; }
        // look right
        product = grid[x][y] * grid[x][y+1] * grid[x][y+2] * grid[x][y+3];
        if (product > greatest){ greatest = product; }
      }
    }
  }

  cout << greatest << endl;

  return 0;
}
