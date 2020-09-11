#ifndef DICTIONARY_H
#define DICTIONARY_H
#include <iostream>
#include <string>
using namespace std;

//After reading Alex's post about how implementing 'using namespace std;' is bad practice, I revised a lot of my code.

int MinWordLength(string words[], int length);

int MaxWordLength(string words[], int length);

int WordLengthRange(string words[], int length);

int AverageWordLength(string words[], int length);

int MostCommonWordLength(string words[], int length);

#endif
