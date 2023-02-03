#include <iostream>
using namespace std;

int main() {

  double priceA;
  double priceB;
  double salesTax = 0.0875;
  double beforeTax;
  double totalCost;

	cout << "Enter price for Product A: ";
	cin >> priceA;
	cout << "Enter price for product B: ";
	cin >> priceB;

  beforeTax = priceA + priceB;
  totalCost = beforeTax + beforeTax * salesTax;

	cout << "Your total cost, including sales tax is " << totalCost << endl;
  
  return 0;
}

