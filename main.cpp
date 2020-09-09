#include <iostream>
#include "search.h"

using namespace std;

int main() {
  int list[] = {1,2,4,5,6,7,8,9};
  int array_length = 8;
  int number = 6;
  
  cout << "Linear Search: " << LinearSearch(list,array_length,number) <<  endl;

  cout << "Binary Search: " << BinarySearch(list,array_length,number) <<  endl;
}