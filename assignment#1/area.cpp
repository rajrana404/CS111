#include <iostream>
using namespace std;

int main() {

  double triBase;
  double triHeight;
  double triArea;
  int userHeight;
  int feet;
  int inch;

  cout << "Enter the base of the right triangle: ";
  cin >> triBase;
  cout << "Enter the height of the right triangle: ";
  cin >> triHeight;

	triArea = 0.5 * triBase * triHeight;
  
  cout << "The area is " << triArea << endl;


  cout << "How many inches tall are you? ";
  cin >> userHeight;

  feet = userHeight / 12;
  inch = userHeight % 12;

  cout << "That is " << feet << " feet and " << inch << " inch.\n";
 
  
  return 0;
}

