/****
* PSEUDOCODE:
*
*/
#include <iostream>
#include <string>

using namespace std;

string FindNthRoot(int number, int root, int precision) {
  double baseNumberPowered = 0;
  double originalBaseNumber = 0;
  double baseNumber = 0;
  double BNM = 1;
  cout << "Number is: " << number << endl;
  cout << "Root is: " << root << endl;
  cout << "BNM is: " << BNM << endl;

  for(int i = 1; i <= precision; i++){
    
    cout << "BNM is now equal to: " << BNM << endl;
    for(int j = 0; j < 10; j++){

      originalBaseNumber = baseNumber;
      baseNumber = baseNumber + BNM;
      baseNumberPowered = baseNumber;
      cout << "base number plus the BNM is now: " << baseNumber << endl;
        for(int k = 0; k < root; k++){
          baseNumberPowered = (baseNumberPowered * baseNumberPowered);
          cout << "base number has been powered to " << baseNumberPowered << endl;
        }
      if(baseNumberPowered == number){
        cout << "This number: " << baseNumberPowered << " is equal to the number: " << number << endl;
      }else if(baseNumberPowered > number){
        
          cout << "This number is too much: " << baseNumberPowered << endl;
          cout << "Setting base number back to " << originalBaseNumber <<endl;
          baseNumber = originalBaseNumber;
          cout << "Reducing BNM / 10 : " << BNM << endl;
          BNM = (BNM / 10);
          j = 10;
        }
    }
  }
cout << "Returning the number: " << std::to_string(baseNumber) << endl;

return std::to_string(baseNumber);
}
