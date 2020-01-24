//**************************************
//  Name: Nayan Bhattacharyya
//  Course: CS 155 - Computer Science
//  Semester: 5th Semester
//  Due Date: 1st October
//  Project 2:
//  The user will enter one, single integer that represents a date in the ISO 8601 format.
//  Your input should be in the form YYYYMMDD (no dashes/no spaces/year 1000 or later).
//  From the integer in this form, your program will output the date in the format we are
//  familiar with in the United States, MM/DD/YYYY. In your output, you may also omit
//  leading 0’s (example for February 15, 2019, you may represent it as 2/15/2019,
//  instead of 02/15/2019).
//**************************************
#include<iostream>
#include<cmath>
using namespace std;
int main(){
  //declaring the variables
  int date_in = 0, days = 0, month = 0;

  //Input
  cout<<"Prompt for input: ";
  cin>>date_in;

  //If complex for decision making
  if(floor(log10(date_in)+1)==8){
    //If the number of digits entered is equal to 8 only then we will enter the if complex

    if((date_in%100)<32){
      //If the day entered is of the correct format then only we will enter this complex

      //Computation and storage of days
      days = date_in%100;
      date_in/=100;

      if((date_in%100)<13){
        //If the month entered is of the correct format then only we will enter this complex

        //Computation and storage of month
        month = date_in%100;
        date_in/=100;

        //The output in correct format
        cout<<month<<"/"<<days<<"/"<<date_in<<endl;
      }
      else
        cout<<"Invalid Month"<<endl;  //Error output for incorrect month format
    }
    else
      cout<<"Invalid Day"<<endl;  //Error output for incorrect day format
  }
  else
    cout<<"Invalid Length"<<endl; //Error output for incorrect length format

  //Completed execution succesfully
  return 0;
}
