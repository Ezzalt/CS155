//**************************************
//  Name: Nayan Bhattacharyya
//  Course: CS 155 - Computer Science
//  Semester: 5th Semester
//  Due Date: 7th November
//  Assignment 10: WAP that gives the average of the list values
//**************************************
#include<iostream>
using namespace std;
const int MAX = 5;
//function declaration
double GetAverages(int[], int);
void FillRand(int[], int);
//driver function
int main(){
  int list[MAX] = {10,20,30,40,50};//initialise list
  double average = GetAverages(list, MAX);
  cout<<"The average of the list is: "<<average;
  return 0;
}
//function defintions
double GetAverages(int ar[], int size){
  double sum = 0.0d;
  for(int i = 0; i < size; i++)
    sum += (double)ar[i];
  sum/=size;
  return(sum);//return value
}
void FillRand(int ar[], int size){
  for(int i = 0; i < size; i++)
    ar[i] = rand();
}
//**************************************
//  Sample execution :
//  The average of the list is: 30
//  [Finished in 0.523s]
//**************************************
