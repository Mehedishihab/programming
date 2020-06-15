#include<bits/stdc++.h>
using namespace std;
int febo(int n)
{
    if(n==0)
        return 0;
    else if(n==1)
    {
        return 1;
    }
    else
        return febo(n-1)+febo(n-2);
}
int main ()
{
    int n,p;
    cin>>n;
    p=febo(n);
    cout<<p;
    return 0;
}
