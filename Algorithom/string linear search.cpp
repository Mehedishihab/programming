#include<bits/stdc++.h>
using namespace std;
int main()
{
    string a;
    char p;
    cin>>a;
    cin>>p;
    int l=a.length();
    for(int i=0;i<l;i++)
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
