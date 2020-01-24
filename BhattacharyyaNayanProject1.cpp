//**************************************
//  Name: Nayan Bhattacharyya
//  Course: CS 155 - Computer Science
//  Semester: 5th Semester
//  Due Date: 29th August
//  Project 1 :
//  UNA football season is upon us. UNA will send 40% of its ticket receipts
//  to the City of Florence for the use of Braly Stadium. The stadium manager
//  has asked you to write a small program that will print an invoice for
//  weekly ticket income and profits for a given movie.Adult  tickets  sell
//  for  $8.25  and  children  tickets  are  $4.50.  The  program  will  ask
//  the  user  for  the name of the opponent, the number of adults tickets sold,
//  and the number of children tickets sold. Use a cstring to store the opponent
//  name.The program will compute the gross box office revenue, the City of
//  Florence amount, and UNA’s net profit. It will then echo back the opponent
//  name along with the three computed values. It should display the amounts using
//  a dollar sign and two decimal places.
//**************************************
#include<iostream>
#include<iomanip>
#include<cstring>
using namespace std;
int main(){
  //declaring the variables
  string opponent_name;//Opponent Name
  int sold_adult = 0, sold_child = 0;// No. of tickets sold
  double gbo = 0.0d, cof = 0.0d, una_net = 0.0d;// Variables for final answers

  //Input
  cout<<"What is the name of the opponent? ";
  getline(cin,opponent_name);
  cout<<"How many adult tickets were sold? ";
  cin>>sold_adult;
  cout<<"How many children tickets were sold? ";
  cin>>sold_child;

  //Computation of Gross Box Office Revenue
  gbo = 4.5*sold_child + 8.25*sold_adult;
  cout<<fixed<<setprecision(2);
  cout<<"Opponent name:\t\t\t\t"<<opponent_name<<endl;
  cout<<"Gross Box Office Revenue:\t\t"<<"$ "<<gbo<<endl;

  //Computation of computation of City Of florence Amount and UNA Net Profit
  cof = 40*gbo/100;
  una_net = gbo-cof;
  cout<<"City Of Florence Amount:\t\t"<<"$ "<<cof<<endl;
  cout<<"UNANet Profit:\t\t\t\t"<<"$ "<<una_net<<endl;

  //Completed execution succesfully
  return 0;
}
