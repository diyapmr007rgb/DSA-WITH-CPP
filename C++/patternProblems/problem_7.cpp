#include<iostream>
using namespace std;
int main()
{
   char alp='A';
    for(int i=0;i<=4;i++)
    {
        
        for(int j=0;j<i+1;j++)
        {
           cout<<alp;

           
        }
        alp++;
        cout<<"\n";
    }
    return 0;
}