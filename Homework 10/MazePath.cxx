#include "MazePath.h"
#include <iostream>
#include <stack>
#include <cassert>

using namespace std;

const string MazePath::DIRECTIONS = "NSEW";
const string MazePath::COMPLEMENTS = "SNWE";

MazePath::MazePath() {
}

MazePath::MazePath(string steps) {
    for (int ndx = 0; ndx < steps.size(); ndx++) {
        assert(DIRECTIONS.find(steps[ndx]) != string::npos);
        path.push(steps[ndx]);
        strPath.push_back(steps[ndx]);
    }
}

//takes a step further into the maze
void MazePath::takeStep(char step) {
  if (DIRECTIONS.find(step) != string::npos) {
      path.push(step);
      strPath.push_back(step);
  }
}

//returns the sequence of steps to get back to the starting point
string MazePath::directionsOut() {
  //your code here
  return "";
}

//overloaded output operator
ostream& operator<< (ostream &out, const MazePath &mazepath){
  //your code here
  return out;
}

// overloaded assignmet operator
MazePath& MazePath::operator= (const string &m)
{
    MazePath mp(m);
    *this = mp;
    return *this;
}
