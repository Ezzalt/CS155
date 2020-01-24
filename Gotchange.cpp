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
int dollar = 0, dime = 0, quarter = 0, penny = 0, nickel = 0, half_doll = 0;
void genchange(double a){
  dollar = a;
  int x = (int)100*(a - dollar);
  cout <<x;
  if(x > 0){
    while(x > 5){
      if(x>=50){
        half_doll = x / 50;
        x %= 50;
      }
      if(x>=25){
        quarter = x / 25;
        x %= 25;
      }
      if(x>=10){
        dime = x / 10;
        x %= 10;
      }
      if(x >= 5){
        nickel = x / 5;
        x %= 5;
      }
    }
    penny = x;
  }
}
int main(){
  double pur_price = 0.0d, doll_val = 0.0d, change_val = 0.0d, recieved_money = 0.0d;
  cout << "Input product purchase price: ";
  cin >> pur_price;
  cout << "Input money recieved: ";
  cin >> recieved_money;
  if(recieved_money >= pur_price){
    cout << "Purchase complete"<< endl;
    if(recieved_money > pur_price){
      cout<<"Please dispense: $"<<recieved_money-pur_price<<endl;
    }
    else
      cout << "No change needed to dispense";
  }
  return 0;
}
