#include <iostream>
#include <string>

using namespace std;
#include "MazePath.h"

bool S_value(string* input)
char valid = "NSEW";
 for (int i = 0 ; i < input.length(); i++) {
   input[i] = find.(input[i]);
   if (validChars.length(input[i]) == string::npos) {
     return false;
   }
 }
 return true;
}

int main() {
 char another = 'y';
 string path = "";
 MazePath mazepath;
 cout << "Welcome to the path reverser program.\n";
 while (another == 'y' || another == 'Y') {
   cout << "Enter a path as a series of steps (NSEW), press enter when done ";
   cin >> path;
   if (validInput(path)) {
     mazepath = path;
     cout << "The path is: " << mazepath << endl;
     cout << "The reversed path is:" << mazepath.directionsOut() << endl;
     cout << "Another? (Y/N) ";
     cin >> another;
   } else {
     cout << "Path is not valid (must only contain (NSEW))\n";
   }
 }
}
