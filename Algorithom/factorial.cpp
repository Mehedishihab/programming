#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,p=1;
    cin>>n;
   for(int i=n;i>=1;i--)
    {
        p=p*i;
    }

    cout<<p;

    return 0;
}
