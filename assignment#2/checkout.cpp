#include <iostream>
using namespace std;

int main() {
 
double total;

  for(double price; price != 0; price++){
    cout << "Enter the price for the item ";
    cin >> price;

    if(price >= 1){
     total = price + total;}

    else if(price == 0){
     cout << "Your total is: $" << total << endl;
	if(total > 100){
	cout << "Thats Expensive !!!" << endl;
	 }
      return 0;}
  }
}

