//**************************************
//  Name: Nayan Bhattacharyya
//  Course: CS 155 - Computer Science
//  Semester: 5th Semester
//  Due Date: 29th August
//  Assignment 5: Write a program that will help a cashier distribute change.
//  The input to obtain from the cashier will be the total purchase price and the
//  amount of cash given.  If enough cash is given, your program will inform the
//  cashier how much change to dispense.  If not enough cash is given, your program
//  will inform the cashier not enough cash was given to complete the purchase.
//**************************************
#include<iostream>
#include<cmath>
using namespace std;
int main(){
  //initialisation of variables
  double pur_price = 0.0d, recieved_money = 0.0d;

  //inputs
  cout << "Input product purchase price: $";
  cin >> pur_price;
  cout << "Input money recieved: $";
  cin >> recieved_money;

  //Processing
  if(recieved_money >= pur_price){
    //Money is enough for purchase to be processed
    cout << "Purchase complete"<< endl;
    if(recieved_money > pur_price){
      //Change dispensation is required
      cout<<"Please dispense: $"<<recieved_money-pur_price<<endl;
    }

    else
      cout << "No change needed to dispense"; //change dispensation is not required
  }
  //Succesful execution
  return 0;
}
//**************************************
//  Example execution:-
//  Input product purchase price: $58.57
//  Input money recieved: $60.50
//  Purchase complete
//  Please dispense: $1.93
//**************************************
