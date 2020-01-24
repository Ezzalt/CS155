//**************************************
//  Name: Nayan Bhattacharyya
//  Course: CS 155 - Computer Science
//  Semester: 5th Semester
//  Due Date: 29th August
//  Project 3 :
//
//**************************************
#include<iostream>
#include<fstream>
#include<cstring>
using namespace std;
int main(){
  //declaring the variables
  ifstream ballot;
  string input;
  int vote = 0, count = 0, cd = 0, hp = 0, hg = 0, vc = 0, ll = 0, sb = 0, dm = 0, nl = 0;
  cout<<"Input file name for ballot counter(Please type it in correctly with .txt extension): ";
  cin>>input;
  ballot.open(input);
  if(!ballot.fail()){
    while(ballot>>vote){
      count++;
      switch(vote){
        case 1: {
          cd++;
          break;
        }
        case 2: {
          hp++;
        }
        case 3: {
          hg++;
          break;
        }
        case 4: {
          vc++;
          break;
        }
        case 5: {
          ll++;
          break;
        }
        case 6: {
          sb++;
          break;
        }
        case 7: {
          dm++;
          break;
        }
        case 8: {
          nl++;
          break;
        }
        default:{
          break;
        }
      }
    }
    count/=4;
    if(cd>hp){
      cout<<"Presidential Election Winner:"<<endl;
      cout<<"Cedric Diggory - "<<cd<<" votes - WINNER("<<(double)cd/count*100<<"%)"<<endl;
      cout<<"Harry Potter - "<<hp<<" votes - ("<<(double)hp/count*100<<"%)"<<endl;
    }
    else if(cd==hp)
      cout<<"Presidential Elections:"<<endl<<"Tied!";
    else{
      cout<<"Presidential Election Winner:"<<endl;
      cout<<"Harry Potter - "<<hp<<" votes - WINNER("<<(double)hp/count*100<<"%)"<<endl;
      cout<<"Cedric Diggory - "<<cd<<" votes - ("<<(double)cd/count*100<<"%)"<<endl;
    }
    cout<<endl;
    if(hg>vc){
      cout<<"Vice Presidential Winner:"<<endl;
      cout<<"Hermione Granger - "<<hg<<" votes - WINNER("<<(double)hg/count*100<<"%)"<<endl;
      cout<<"Vincent Crabbe - "<<vc<<" votes - ("<<(double)vc/count*100<<"%)"<<endl;
    }
    else if(hg==vc)
      cout<<"Vice Presidential Elections:"<<endl<<"Tied!";
    else{
      cout<<"Vice Presidential Winner:"<<endl;
      cout<<"Vincent Crabbe - "<<vc<<" votes - WINNER("<<(double)vc/count*100<<"%)"<<endl;
      cout<<"Hermione Granger - "<<hg<<" votes - ("<<(double)hg/count*100<<"%)"<<endl;
    }
    cout<<endl;
    if(ll>sb){
      cout<<"Secretary Election Winner:"<<endl;
      cout<<"Luna Lovegood - "<<ll<<" votes - WINNER("<<(double)ll/count*100<<"%)"<<endl;
      cout<<"Susan Bones - "<<sb<<" votes - ("<<(double)sb/count*100<<"%)"<<endl;
    }
    else if(ll==sb)
      cout<<"Secretary Elections:"<<endl<<"Tied!";
    else{
      cout<<"Secretary Election Winner:"<<endl;
      cout<<"Susan Bones - "<<sb<<" votes - WINNER("<<(double)sb/count*100<<"%)"<<endl;
      cout<<"Luna Lovegood - "<<ll<<" votes - ("<<(double)ll/count*100<<"%)"<<endl;
    }
    cout<<endl;
    if(dm>nl){
      cout<<"Treasurer Election Winner:"<<endl;
      cout<<"Draco Malfoy - "<<dm<<" votes - WINNER("<<(double)dm/count*100<<"%)"<<endl;
      cout<<"Neville Longbottom - "<<nl<<" votes - ("<<(double)nl/count*100<<"%)"<<endl;
    }
    else if(dm==nl)
      cout<<"Treasurer Elections:"<<endl<<"Tied!";
    else{
      cout<<"Treasurer Election Winner:"<<endl;
      cout<<"Neville Longbottom - "<<nl<<" votes - WINNER("<<(double)nl/count*100<<"%)"<<endl;
      cout<<"Draco Malfoy - "<<dm<<" votes - ("<<(double)dm/count*100<<"%)"<<endl;
    }
    cout<<endl;
  }
  return 0;
}
