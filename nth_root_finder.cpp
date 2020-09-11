/****
FindNthRoot:
  Initialize baseNumber, baseNumberPowered, and originalBaseNumber to 0
  Initialize baseNumberMultiplier
  For the length specified in precision parameter: 
    for numbers one through ten:
      set originalBaseNumber to baseNumber
      add the baseNumberMultiplier to baseNumber
      set baseNumberPowered to baseNumber
      for the number of times specified in root parameter
        multiply the baseNumberPowered by the baseNumber
      if the baseNumberPowered greater than the number requested:
        set the baseNumber back to the originalBaseNumber
        divide the baseNumberMultiplier by ten
        cut the for loop short by setting j to ten
  return the baseNumber after it has been honed in on to the specified precision
*/
#include <iostream>
#include <string>

using namespace std;

string FindNthRoot(int number, int root, int precision) {

  //These are all wordy but important
  //baseNumberPowered is the value of baseNumberafter it has been 
  //multiplied by itself x number of times specified in the root parameter
  double baseNumberPowered = 0;

  //originalBaseNumber saves a state for the baseNumber to revert to should 
  //the baseNumberPowered turn out to be too high in one iteration
  double originalBaseNumber = 0;

  //the main number to work with through this function, this eventually becomes the 
  //number needed from this method
  double baseNumber = 0;

  //This double's role is to iterate the baseNumber higher and higher when it does not 
  //reach the limit after being multiplied by itself x amount of times.
  //When reaching a number that goes too high, the function backtracks to the 
  //originalBaseNumber and divides the baseNumberMultiplier incremement by 10, indicating that 
  //the needed number is in between the current baseNumber and the originalBaseNumber
  double baseNumberMultiplier = 1;

  //The object of this for loop is to keep the program going until it reaches the precision 
  //that the user wants. It will already have the number the first round, however it will add more digits
  //with more iterations with greater specificity
  for(int i = 0; i <= precision; i++){
    for(int j = 0; j < 10; j++){

      originalBaseNumber = baseNumber;
      //This iteration becomes smaller and smaller as the function hones in on the requested double
      baseNumber = baseNumber + baseNumberMultiplier;
      baseNumberPowered = baseNumber;

        for(int k = 1; k < root; k++){

          //multiplying the variable baseNumberPowered against a static baseNumber to achieve
          //a consistent powered number
          baseNumberPowered = (baseNumberPowered * baseNumber);

        }
      //backtracking function that makes the program search in smaller increments
      if(baseNumberPowered > number){
          baseNumber = originalBaseNumber;
          baseNumberMultiplier = (baseNumberMultiplier / 10);
          j = 10;
        }
    }
  }
string modifiedOutput = std::to_string(baseNumber);

if(precision == 0){

  modifiedOutput.resize(precision + 1);

}
modifiedOutput.resize(precision + 2);

return modifiedOutput;
}
