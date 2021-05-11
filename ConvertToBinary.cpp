#include <iostream>
#include<string>
using namespace std;
int a, i;
string b="";
int main()
{
  cout<<"Decimal Number:";
  cin>>a;
  while(a!=1)
  {
    b=to_string(a%2)+b;
    a=a/2;
  }
  cout<<a%2<<b; //a%2?
}
