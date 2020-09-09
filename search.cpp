int LinearSearch(int list[], int arrayLength, int number) {
	
	for (int i = 0; i < arrayLength; i++) {
		if (number == list[i]) {
			;
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