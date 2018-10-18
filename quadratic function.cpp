#include<iostream>
#include<cmath>
using namespace std;

int main()
{
  float a,b,c;
  float quad1,quad2,check;
  cout<<"enter values for a, b, and c: " "\n";
  cin>>a>>b>>c;

  quad1= (-b + sqrt((b * b) - (4 * a * c))) / (2 *a);
  quad2= (-b - sqrt((b * b) - (4 * a * c))) / (2 *a);

  if(check>=0)
  	{
    cout<<"a= "<<a<<"\n";
    cout<<"b= "<<b<<"\n";
    cout<<"c= "<<c<<"\n";
    cout<<"The answer is: "<<quad1<<"\n";
    out<<"Or "<<quad2<<"\n";

  	}

  else
    {
      cout<<"no soultion" "\n";

    }




  return 0;
}
