#include <iostream>
#include <cmath>
using namespace std;

int main()
{
  int a,b,c;
  float ans,x;

  cout<<"Enter a, b, and c: \n";
  cin>>a>>b>>c;

  cout<<"Enter a vaule for x: \n";
  cin>>x;
  ans=((a*a)*x)+(b*x)+c;

  if(x=!0)
    {

      cout<<"Quadratic function vaule= "<<ans<<"\n";

    }		
  else
   	{
    cout<<"X can not be zero ";

    }

return 0;
}
