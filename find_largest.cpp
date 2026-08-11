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
    int largest = INT_MIN;
    for(int i=0;i<size;i++)
    {
        if(n[i]>largest)
        {
            largest=n[i];
        }
    }
    cout<<"The largest element is: "<<largest<<endl;
    return 0;
}