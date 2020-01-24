//**************************************
//  Name: Nayan Bhattacharyya
//  Course: CS 155 - Computer Science
//  Semester: 5th Semester
//  Due Date: 3rd October
//  Assignment 6: Experiment 2: Write a program named LastName-A6-Ex2.cpp that will
//  input a single dimension that will represent both the row and the column. Then write
//  3 sets of nested for loops that will output shapes based upon the following recommendations
//  (samples based upon 4 X 4, but your code should allow for any dimension with row and
//  column being the same).
//**************************************
#include<iostream>
using namespace std;
int main(){
  //initialisation of variables
  int input = 0;

  cout<<"Input the number: ";
  cin>>input;

  //Loops
  for(int i = 0; i < input; i++){
    for(int j = input; j > 0; j--){
      cout<<"X ";
    }
    cout << endl;
  }
  
  //Succesful execution
  return 0;
}
//**************************************
//  Example execution:-
//  Input the number: 548613
//  5
//  4
//  8
//  6
//  1
//  3
//  Sum: 27
//**************************************
