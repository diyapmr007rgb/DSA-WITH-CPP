#include <iostream>
#include <cmath>
using namespace std;
int btod(string s)
{
    int n = stoi(s); 
    int length = s.length(); 
    int ans=0,p=0;
    for(int i=0;i<length;i++)   
    {
        int rem=n%10;
        ans=ans+rem*pow(2,p);
        n=n/10;
        p++;
    }
    cout<<ans<<endl;
    return 0;
}
int main()
{
   string n;
   cin>>n;
    btod(n);
    return 0;
}
