#include<iostream>
#include<cmath>
using namespace std;

int main()

{
  float slength1, slength2, slength3;
cout<< "Enter 2 lengths of a triangle: ";
cin>>slength1>>slength2;
slength3=hypot(slength1,slength2);
cout<<"First Side Length= "<<slength1<< "\n";
cout<<"Second Side Length= "<<slength2<< "\n";
cout<<"Hypotenuse Length= "<<slength3<< "\n";

  return 0;
}
