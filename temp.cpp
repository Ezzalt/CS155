#include<iostream>
using namespace std;
int main(){
  double c,f;
  cout<<"Input value of temperature in degree celsius: ";
  cin>>c;
  f = c*9.0d/5 +32;
  cout<<"Value in farenheit: "<<f<<" deg. farenheit"<<endl;
  return 0;
}
