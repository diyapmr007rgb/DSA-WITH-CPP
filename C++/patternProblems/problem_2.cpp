#include<iostream>
using namespace std;
int main()
{
    for(int i=1;i<=4;i++)
    {
        char alp='A';
        for(int j=1;j<=4;j++)
        {
            cout<<alp;
            alp++;
        }
        cout<<"\n";
    }
    return 0;
}