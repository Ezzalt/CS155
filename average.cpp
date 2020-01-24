#include<iostream>
using namespace std;
int main(){
  //variable declaration
  int a = 0, b = 0, c = 0;
  double result;

  //value assignment
  cout << "Enter number 1: ";
  cin >> a;
  cout << "Enter number 2: ";
  cin >> b;
  cout << "Enter number 3: ";
  cin >> c;

  //calculation
  result = (double)(a+b+c)/3;

  //output
  cout << "The average is " << result << endl;

  //successful return
  return 0;
}
