#include <iostream>

using namespace std;

int main()
{
   int a,x,y;
   cin>>a;
   x=a/792;
   y=a%792;
  if (((y-9)<181) and ((y-9)%2==0))
     cout<<x<<' '<<y;
     else cout<<"IMPOSIBIL";
   else if ((y-9-180)%2==0)
      cout<<x<<' '<<y;
    else cout<<"IMPOSIBIL";


}
