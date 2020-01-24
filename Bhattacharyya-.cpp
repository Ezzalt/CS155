//**************************************
//  Name: Nayan Bhattacharyya
//  Course: CS 155 - Computer Science
//  Semester: 5th Semester
//  Due Date: 29th August
//  Assignment 2:
//  Objectives:
//  • The student will write a C++ program declaring variables
//  • The student will write a C++ program that outputs.
//  • The student will write a C++ program that inputs.
//  • The student will compile and run a working program.
//  Purpose of this program: To ouput all arithematic operations that can be performed on two integers.
//  (No floating point variables are used.)
//  The program has a variable that is reused to save memory, otherwise the answer can be easily printed
//  straight to the console as well without the need for a variable.
//  No. of times compiled: 1
//**************************************
#include<iostream>
using namespace std;
int main(){
  int num1 = 0;
  int num2 = 0;
  cout<<"Enter 2 integer values: "<<endl; //prompt for input
  cin>>num1;//input first integer
  cin>>num2;//input second integer
  int result;//a variable that would be reused
  result = num1 + num2;//calculating the sum
  cout << num1 <<"+"<< num2<<"="<<result<<endl;
  result = num1 - num2;//calculating the difference
  cout << num1 <<"-"<< num2<<"="<<result<<endl;
  result = num1 * num2;//calculating the product
  cout << num1 <<"X"<< num2<<"="<<result<<endl;
  result = num1 / num2;//calculating the quotient
  cout << num1 <<"/"<< num2<<"="<<result<<endl;
  result = num1 % num2;//calculating the remainder
  cout << num1 <<"%"<< num2<<"="<<result<<endl;
  return 0;
}
//**************************************
//  Sample input 1: [ezzalt@ezzalt-pc CS 155]$ ./Bhattacharyya-A2
//  Enter 2 integer values:
//  2
//  3
//  Output:
//  2+3=5
//  2-3=-1
//  2X3=6
//  2/3=0
//  2%3=2
//  [execution end]
//  Sample input 2: [ezzalt@ezzalt-pc CS 155]$ ./Bhattacharyya-A2
//  Enter 2 integer values:
//  7
//  8
//  Output:
//  7+8=15
//  7-8=-1
//  7X8=56
//  7/8=0
//  7%8=7
//  [execution end]
//**************************************
