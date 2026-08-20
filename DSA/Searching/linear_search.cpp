#include<iostream>
using namespace std;
int main()
{
 
    int n[]={4,2,7,8,1,2,5};
    int target;
    cout<<"Enter the target element to search: ";
    cin>>target;
    for(int i=0;i<7;i++)
    {
        if(n[i]==target)
        {
            cout<<"Element found at index: "<<i<<endl;
            return i;
        }
    }
    return -1;
    cout<<"Element not found"<<endl;
    return 0;
    
}