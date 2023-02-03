#include <iostream>
#include <cmath>
using namespace std;

double triangle(double x, double y){
  double hypo = sqrt(x*x+y*y);
  return hypo;
}


int main() {
double a,b;
cout<<"Enter side one of the triangle: ";
cin>>a;
cout<<"Enter side two of the triangle: ";
cin>>b;
cout<<"Side 1: "<<a<<"\n"<<"Side 2: " <<b<<"\n"<<"Hypotenuse: "<<triangle(a,b);
cout<<endl; 
return 0;
}
