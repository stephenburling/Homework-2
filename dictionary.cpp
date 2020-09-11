/****
MinWordLength:
  initialize int shortestCharacterCount
  to the first element in the array (since it is the shortest out of a sample of 1)

  for the length of the array:

    initialize int temp to the current element in the array

    if the temporary integer is smaller than the current smallest integer:
    replace the current smallest integer with the temporary integer

  return when shortest word length has been found

MaxWordLength:
  Same exact functioning as MinWordLength with one exception:
  if the temporary integer is GREATER than the current smallest integer:
  replace the current largest integer with the temporary integer

  return when shortest integer has been found

WordLengthRange:
  initialize ints lowestNumber and highestNumber by calling the methods MinWordLength and MaxWordLength, respectively

  initialize the int range by sibtracting the lowest number from the highest number

  return range

AverageWordLength
  initialize int sum to 0

  for the length of the array:
    iteratively add the length of each array element to the sum

  initialize int average by dividing  sum by the length of the array

  return average

MostCommonWordLength:
  initialize mostCommonLength to the size of the first element in the array
  initialize keyCount to 0
  initialize secondKeyCount to 0

  for the length of the array:
    initialize the key to the size of the current element in the array
    reset keyCount to 0
    for the length of the array:
      if the size of the current element matches the key:
        iterate keyCount by one
    if keyCount is greater than secondKeyCount:
      set the mostCommonLength to key
      set secondKeyCount to keyCount
    if i is equal to the length of the array minus one:
      return the mostCommonLength

  return -1;
*/
#include <iostream>
#include <string>

using std::string;
using std::cout;
using std::endl;

int MinWordLength(string words[], int length) {
    
	//this will be a constant holding the shortest amount of characters submitted in the array, and will be changed accordingly when the function has run its course. 
	int shortestCharacterCount = words[0].size();

	for (int i = 0; i < length; i++) {
		
    //implementing a basic swapping function in this method that filters for the smallest integer
		int temp = words[i].size();

		if (temp < shortestCharacterCount) {
			shortestCharacterCount = temp;
		}

	}

	return shortestCharacterCount;

}

int MaxWordLength(string words[], int length) {
	
  //contents of method are identical to MinWordLength, but the if statement is changed to 
  //produce different results.
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
  //since I already have methods that find the min and max, I just call them here and 
  //manipulate the result
	int lowestNumber = MinWordLength(words, length);
	int highestNumber = MaxWordLength(words, length);

	int range = highestNumber - lowestNumber;

	return range;
}

int AverageWordLength(string words[], int length) {

	int sum = 0;

  //relatively simple iterator function that compounds the sum int
	for (int i = 0; i < length; i++) {

		sum = sum + words[i].size();

	}

  //take the average with the passed length parameter
	int average = sum / length;

	return average;
}

int MostCommonWordLength(string words[], int length) {

	int mostCommonLength = words[0].size();
		
	int keyCount = 0;

	int tempKeyCount = 0;

	for(int i = 0; i < length; i++) {
    /*
    This is central to the function, the 'key' sets the precedent for the nested for loop by providing it 
    a length to look for while scanning. The keyCount is the number of times the nested for loop
    finds an element that matches the 'key', or the length of the word. The tempKeyCount is just that,
    a temporary slot to store the other keyCount so that the previous length is kept local. This works similar
    to the min and max word count methods on a macro level.
    */
		int key = words[i].size();

		keyCount = 0;

		for (int j = 0; j < length; j++) {
			if (key == words[j].size()) {
				keyCount++;
			}
		}

		if ( keyCount > tempKeyCount) {

			mostCommonLength = key;

      tempKeyCount = keyCount;

		}

    /*
    This was one I couldn't figure out how to work around. I was setting the return at the
    end of the method call to return mostCommonLength, but since the for loop only receives a
    copy of a previously defined element, and since also that I can't return something outside 
    of a for loop that was defined inside of it, I had to just return it manually
    at the end of the for loop. This doesn't miss anything, but for some reason this was a problem for me 
    even when I did the same method in other functions in this cpp.
    */
    if(i == (length-1)){

     return mostCommonLength;

    }
	}
  return -1;
}