#include <iostream>
#include <string>
#include "dictionary.h"

using std::string;
using std::cout;
using std::endl;

int main() {

	string list[10] = {"sfl", "sft", "efr", "rsssrff", "tffffffp", "sfs", "lfd", "wisfr", "ssng", "dry"};

	int array_length = 10;

	cout << "Shortest word length is: "<<MinWordLength(list, array_length) << endl;

	cout << "Longest word length is: " << MaxWordLength(list, array_length) << endl;

	cout << "Range for word length: " << WordLengthRange(list, array_length) << endl;

	cout << "Word length average is: " << AverageWordLength(list, array_length) << endl;

	cout << "Most common word length is: " << MostCommonWordLength(list, array_length) << endl;

	return 0;

}