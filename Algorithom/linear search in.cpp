#include<bits/stdc++.h>
using namespace std;
int main()
{
    int  a[5];
    int  p;


     for(int j=0; j<5; j++)
    {
        cin>>a[j];
    }cin>>p;
    for(int i=0;i<5;i++)
    {
        if(p==a[i])
        {
            cout<<"found";
            return 0;
        }
    }
    cout<<"not found";
    return 0;
}

