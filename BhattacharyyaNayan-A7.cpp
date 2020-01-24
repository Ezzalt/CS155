//**************************************
//  Name: Nayan Bhattacharyya
//  Course: CS 155 - Computer Science
//  Semester: 5th Semester
//  Due Date: 3rd October
//  Assignment 6: Write a program that will do file processing.  Your data file (A7_in.txt)
//  will contain 3 integers.  Input the 3 integers, find the average of the 3 integers
//  and output the average to the file (A7_out.txt).
//**************************************
#include<iostream>
#include<fstream>
using namespace std;
int main(){
  //initialisation of variables
  ifstream in("A7_in.txt");
  ofstream out("A7_out.txt");
  int a = 0, count = 0;
  double average = 0.0d;

  //Calculation
  in >> a;
  count++;
  while(!in.eof()){
    average += a;
    in >> a;
    count++;
  }
  average /= (double)count;
  out << "Average is: " << average;

  //Output
  cout << "Average is : " << average;

  //Succesful execution
  return 0;
}
//**************************************
//  Example execution 1:-
//  File A7_in.txt : "2 4 6"
//  File A7_out.txt : "Average is : 3"
//  Console output: Average is : 3
//  Example execution 2:-
//  File A7_in.txt : "10  14  65  78"
//  File A7_out.txt : "Average is : 33.4"
//  Console output: Average is : 33.4
//  Example execution 3:-
//  File A7_in.txt : "78
//  45
//  63
//  96
//  78
//  25
//  12
//  45"
//  File A7_out.txt : "Average is : 49.1111"
//  Console output: Average is : 49.1111
//**************************************
