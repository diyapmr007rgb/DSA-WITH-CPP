#include<iostream>
#include<climits>
using namespace std;
int main()
{
    int n[5];
    for(int i=0;i<5;i++)
    {
        cin>>n[i];
    }
    int size=sizeof(n)/sizeof(n[0]);
    int smallest = INT_MAX;
    for(int i=0;i<size;i++)
    {
        if(n[i]<smallest)
        {
            smallest=n[i];
        }
    }
    cout<<"The smallest element is: "<<smallest<<endl;
    return 0;
}