#include<iostream>
#include<cmath>
using namespace std;

int main()
{
  int a,b,c;
  float x,quadfunc;
  cout<<"enter values for a, b, and c: " "\n";
  cin>>a>>b>>c;
  cout<<"enter your x value: " "\n";
  cin>>x;
  quadfunc=quad(a, b, c);
  cout>>a>>b>>c "\n";
  cout>>quadfunc "\n";

  return 0;
}
