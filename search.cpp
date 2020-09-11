/*
LinearSearch(array, length of array, number to search)
for every number starting from zero and to the end of the array: 
  if the number to search for is in the index of the given array slot:
  return the index of the number in the array.
else, return -1.

BinarySearch(array, length of array, number to search)
Initilialize the ceiling bound to the length of the array minus one
Initilialize the floor bound to 0
While there are still
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