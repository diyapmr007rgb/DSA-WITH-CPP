#include <iostream>
using namespace std;
int main()
{
    int ans=0;
    int pow=1;
    int reminder;
    int n;
    cin>>n;
    while(n>0)
    {
        reminder=n%2;
        n=n/2;
        ans=ans+reminder*pow;
        pow=pow*10;
      
    }
    cout<<ans;
    return 0;
}