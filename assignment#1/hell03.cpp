#include <iostream>
using namespace std;

int main() {
  string name;
  int birthYear;
  int height;
  int currentYear = 2018;
  cout << "What is your name? ";
  cin >> name;
  cout << "What is your birth year? ";
  cin >> birthYear;
  cout << "What is your height in inches? ";
  cin >> height;

  cout << "Hello, " << name << endl;
  cout << "You are " << currentYear - birthYear << " years old.\n";
  cout << "You are about " << 2.54*height << "cm\n" ;
  return 0;
}

