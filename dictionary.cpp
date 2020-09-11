/****
MinWordLength:

*/
#include <iostream>
#include <string>
using namespace std;

using std::string;
using std::cout;
using std::endl;


int MinWordLength(string words[], int length) {
    
	//this will be a constant holding the shortest amount of characters submitted in the array, and will be changed accordingly when the function has run its course. 
	int shortestCharacterCount = words[0].size();

	for (int i = 0; i < length; i++) {
		
		int temp = words[i].size();

		if (temp < shortestCharacterCount) {
			shortestCharacterCount = temp;
		}

	}
	return shortestCharacterCount;

}

int MaxWordLength(string words[], int length) {
	
	int longestCharacterCount = words[0].size();

	for (int i = 0; i < length; i++) {

		int temp = words[i].size();
		
		if (longestCharacterCount < temp) {
			longestCharacterCount = temp;
		}

	}
	return longestCharacterCount;

	return 1;
}

int WordLengthRange(string words[], int length) {

	int lowestNumber = MinWordLength(words, length);
	int highestNumber = MaxWordLength(words, length);

	int range = highestNumber - lowestNumber;

	return range;
}

int AverageWordLength(string words[], int length) {

	int sum = 0;

	for (int i = 0; i < length; i++) {

		sum = sum + words[i].size();

	}

	int average = sum / length;

	return average;
}

int MostCommonWordLength(string words[], int length) {

	int mostCommonLength = words[0].size();
		
	int keyCount = 0;

	int secondKeyCount;

	for(int i = 0; i < length; i++) {

		int key = words[i].size();

		keyCount = 0;

		for (int j = 0; j < length; j++) {
			if (key == words[j].size()) {
				keyCount++;
			}
		}

		if ( keyCount > secondKeyCount) {

			mostCommonLength = key;

      secondKeyCount = keyCount;

		}

    if(i == (length-1)){

      return mostCommonLength;

    }

	}
  return -1;
}