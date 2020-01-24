//**************************************
//  Name: Nayan Bhattacharyya
//  Course: CS 155 - Computer Science
//  Semester: 5th Semester
//  Due Date: 3rd October
//  Assignment 6: Experiment 1: Write a program named LastName-A6-Ex1 that will input a single integer
//  value and will output the digits of the integer value on one line at a time, then output
//  the sum of the digits.
//**************************************
#include<iostream>
using namespace std;
int main(){
  //initialisation of variables
  int input = 0, sum = 0, x = 0;

  cout<<"Input the number: ";
  cin>>input;

  //Calculation
  while (input != 0)
    {
      x *= 10;
      x +=  input%10 ;
      input /= 10;
    }
  while(x!=0){
    cout << x%10 << endl;
    sum+= x%10;
    x/=10;
  }

  //Output
  cout <<"Sum: "<< sum << endl;
  //Succesful execution
  return 0;
}
//**************************************
//  Example execution 1:-
//  Input the number: 548613
//  5
//  4
//  8
//  6
//  1
//  3
//  Sum: 27
//  
//  Example execution 2:-
//  Input the number: 452545
//  4
//  5
//  2
//  5
//  4
//  5
//  Sum: 25
//**************************************
