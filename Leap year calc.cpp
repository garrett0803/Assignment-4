#include <iostream>
#include <cmath>
using namespace std;

int main()
{
  int leap;
  cout<<"Enter a Year: \n";
  cin>>leap;
  if((leap % 4) == 0)
  {
    cout<<leap<<" Is a Leap Year.";
  }
  else
  {
    cout<<leap<<" Is not a Leap Year.";
  }

  return 0;
}
