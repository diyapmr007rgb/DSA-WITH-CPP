#include<iostream>
using namespace std;
int main()
{
   
    for(int i=0;i<4;i++)
    {
        int num=1;
        for(int j=0;j<i+1;j++)
        {
            cout<<num;
            num++;
        }
        cout<<"\n";
    }
    return 0;
}