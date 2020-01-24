//**************************************
//  Name: Nayan Bhattacharyya
//  Course: CS 155 - Computer Science
//  Semester: 5th Semester
//  Due Date: 3rd October
//  Assignment 9: WAP that declares and calls user-defined functions
//**************************************
#include<iostream>
using namespace std;
//function declaration
int GetRow();
int GetCol();
void PrintRectangle(int row, int col);
//driver function
int main(){
  int row = GetRow();//get number of rows
  int col = GetCol();//get number of columns
  PrintRectangle(row,col);
}
//function defintions
int GetRow(){
  int rows = 0, c = 0;
  while(c==0){
    cout<<"Please input the number of rows to print:(0-21 not including) ";//input
    cin>>rows;
    if(rows<21&&rows>0){
      c++;//end loop
    }
    else{
      cout<<"Row count invalid"<<endl;
    }
  }
  return(rows);//return value
}
int GetCol(){
  int cols = 0, c = 0;
  while(c==0){
    cout<<"Please input the number of columns to print:(0-21 not including) ";//input
    cin>>cols;
    if(cols<21&&cols>0){
      c++;//end loop
    }
    else{
      cout<<"Column count invalid"<<endl;
    }
  }
  return(cols);//return value
}
void PrintRectangle(int row, int col){
  cout<<endl;
  for(int i = 0; i < row; i++){//Print loop start
    for(int j = 0; j < col; j++)
      cout<<"*  ";
    cout<<endl;
  }
}
//**************************************
//  Sample execution 1:
//  [ezzalt@ezzalt-pc CS 155]$ ./g
//  Please input the number of rows to print:(0-21 not including) 10
//  Please input the number of rows to print:(0-21 not including) 20
//
//  *  *  *  *  *  *  *  *  *  *  *  *  *  *  *  *  *  *  *  *
//  *  *  *  *  *  *  *  *  *  *  *  *  *  *  *  *  *  *  *  *
//  *  *  *  *  *  *  *  *  *  *  *  *  *  *  *  *  *  *  *  *
//  *  *  *  *  *  *  *  *  *  *  *  *  *  *  *  *  *  *  *  *
//  *  *  *  *  *  *  *  *  *  *  *  *  *  *  *  *  *  *  *  *
//  *  *  *  *  *  *  *  *  *  *  *  *  *  *  *  *  *  *  *  *
//  *  *  *  *  *  *  *  *  *  *  *  *  *  *  *  *  *  *  *  *
//  *  *  *  *  *  *  *  *  *  *  *  *  *  *  *  *  *  *  *  *
//  *  *  *  *  *  *  *  *  *  *  *  *  *  *  *  *  *  *  *  *
//  *  *  *  *  *  *  *  *  *  *  *  *  *  *  *  *  *  *  *  *
//
//  Sample execution 2:
//  [ezzalt@ezzalt-pc CS 155]$ ./g
//  Please input the number of rows to print:(0-21 not including) 21
//  Row count invalid
//  Please input the number of rows to print:(0-21 not including) 20
//  Please input the number of columns to print:(0-21 not including) 55
//  Column count invalid
//  Please input the number of columns to print:(0-21 not including) 5
//
//  *  *  *  *  *
//  *  *  *  *  *
//  *  *  *  *  *
//  *  *  *  *  *
//  *  *  *  *  *
//  *  *  *  *  *
//  *  *  *  *  *
//  *  *  *  *  *
//  *  *  *  *  *
//  *  *  *  *  *
//  *  *  *  *  *
//  *  *  *  *  *
//  *  *  *  *  *
//  *  *  *  *  *
//  *  *  *  *  *
//  *  *  *  *  *
//  *  *  *  *  *
//  *  *  *  *  *
//  *  *  *  *  *
//  *  *  *  *  *
//
//**************************************
