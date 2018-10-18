#include<iostream>
using namespace std;

int main()
{
  int getweight,lb,oz;
  double deliverycharge;
  cout<<"Enter package weight: \n";
  cin>>getweight;
  lb = (getweight/16);
  oz = (getweight%16);
  cout<<lb<<"lb "<<oz<<"oz \n";
  if(getweight<=16)
  {
    deliverycharge=3.00;
  }
  else if(getweight>16&&getweight<=20)
  {
    deliverycharge=3.50;
  }
  else if(getweight>20&&getweight<=24)
  {
    deliverycharge=4.00;
  }
  else
  {
    deliverycharge=((((getweight-20)/4)*.5)+4.00);
  }
    cout<<deliverycharge;
  return 0;
}
