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
  cout<<"Shape 1: "<<endl;
  for(int i = input; i > 0; i--){
    for(int j = 0; j < i; j++){
      cout<<"X ";
    }
    cout << endl;
  }

  cout << endl;
  cout<<"Shape 2: "<<endl;
  for(int i = 0; i < input ; i++){
    for(int j = 0; j < input; j++){
      if(j >= i)
        cout<<"X ";
      else
        cout<<"  ";
    }
    cout << endl;
  }

  cout << endl;
  cout<<"Shape 3: "<<endl;
  for(int i = 0; i < input; i++){
    cout << "X ";
  }
  cout << endl;
  for(int i = 0; i < input - 2; i++){
    cout<<"X ";
    for(int j = 0; j < input - 2; j++)
      cout<<"O ";
    cout<<"X"<<endl;
  }
  for(int i = 0; i < input; i++){
    cout << "X ";
  }
  cout << endl;
  //Succesful execution
  return 0;
}
//**************************************
//  Example execution:-
//  Input the number: 5
//  Shape 1:
//  X X X X X
//  X X X X
//  X X X
//  X X
//  X
//
//  Shape 2:
//  X X X X X
//    X X X X
//      X X X
//        X X
//          X
//
//  Shape 3:
//  X X X X X
//  X O O O X
//  X O O O X
//  X O O O X
//  X X X X X
//
//**************************************
