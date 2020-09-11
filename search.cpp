/*
LinearSearch(array, length of array, number to search)
  for every number starting from zero and to the end of the array: 
    if the number to search for is in the index of the given array slot:
    return the index of the number in the array.
  else, return -1.

BinarySearch(array, length of array, number to search)
  Initilialize the ceiling bound to the length of the array minus one
  Initilialize the floor bound to 0
  While the floor is less than or equal to the ceiling, that is while there are still elements to scan:
    initialize the midpoint to the sum of the floor and ceiling divided in half
    if the requested number is equal to the midpoint of the array:
      return the midpoint
    if the number is less than the midpoint:
      set the ceilingNum to one less than the midpoint, disregarding the upper half
    if the number is greater than the midpoint:
      set the floorNum to one greater than the midpoint, disregarding the lower half
  If the element is not present, return -1.
*/
int LinearSearch(int list[], int arrayLength, int number) {
	for (int i = 0; i < arrayLength; i++) {
		if (number == list[i]) {
			return i;
		}
	}
	return -1;
}

int BinarySearch(int list[], int arrayLength, int number)
{
	int ceilingNum = arrayLength - 1;
	int floorNum = 0;

	while (floorNum <= ceilingNum)
	{
		int midpoint = (floorNum + ceilingNum) / 2;

		if (number == list[midpoint]) {

			return midpoint;

		}
		else if (number < list[midpoint]) {

			ceilingNum = midpoint - 1;

		}
		else { 

			floorNum = midpoint + 1; 

		}
	}

	return -1;
}