//*************************************
//  Name: Nayan Bhattacharyya
//  Course: CS 155 - Computer Science
//  Semester: 5th Semester
//  Assignment 1: Type in the program and see what it'll do
//  Due Date: 27th August
//  No. of times compiled: 2
//  Error Log:
//  Bhattacharyya-A1.cpp:12:9: fatal error: math: No such file or directory
//  12 | #include<math>
//     |         ^~~~~~
//  compilation terminated.
//  Correction: g++ on Linux has all C libraries marked with a c in the start of their name.
//  So we have to use the library cmath instead of math for correcting this problem. The program
//  compiled succesfully after this correction.
//  Explanation of program: The program evaluates the weekday on which the user who inputs their
//  birth information are born.
//*************************************
#include<iostream>
#include<string>
#include<cmath>
using namespace std;
const string STARS = "*************************************";

int main(){
  //initialisation
  string name, day;
  int date, year, month, y,c;
  int week;

  //input
  cout<<"Please enter your name with no spaces: ";
  cin>>name;
  cout<<STARS<<endl<<"Hello "<<name<<", I hope you are having a great day!"<<endl<<STARS<<endl;

  cout<<"In what year were you born?: ";
  cin>>year;
  cout<<"In what month were you born(use 1-Jan, 2-Feb, etc)?: ";
  cin>>month;
  cout<<"On what day of the month were you born?: ";
  cin>>date;
  //start of program function
  if(month == 1){
    month = 13;
    year -= 1;
  }
  if(month == 2){
    month = 14;
    year -=1;
  }

  y = year % 100;
  c = year / 100;
  week = int((date + floor((13 * (month + 1)) / 5.0) + y + floor(y / 4.0) + floor(c / 4.0) - (2 * c))) % 7;

  //Logic to evaluate the day of the week
  switch(week){
    case 1: day = "Sunday"; break;
    case 2: day = "Monday"; break;
    case 3: day = "Tuesday"; break;
    case 4: day = "Wednesday"; break;
    case 5: day = "Thursday"; break;
    case 6: day = "Friday"; break;
    case 7: day = "Saturday"; break;
    default: day = "ERROR";
  }

  //Final output
  cout<<"You were born on a "<<day<<endl;

  //Successful execution message return 0
  return 0;
}
