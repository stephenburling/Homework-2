#include <iostream>
#include <string>
#include "nth_root_finder.h"

using std::string;
using std::cout;
using std::endl;

int main() {
  int number = 864;
  int root = 3;
  int precision = 1;

  cout << "The root "<< root <<"  of " << number << " is " << FindNthRoot(number, root, precision) << endl;

	return 0;
}