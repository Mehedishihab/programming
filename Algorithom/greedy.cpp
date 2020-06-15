#include<bits/stdc++.h>
using namespace std;
int main()
{
   int n,v,p=0,i,j=0,l=0;
    cin>>n;
    vector<int>s,a;
    for( i=0;i<n;i++)
    {
        cin>>l;
        a.push_back(l);
    }
    cin>>v;
    sort(a.begin(),a.end());

    for(i=n-1;i>=0;i--)
    {
        if(v>=a[i]&&v!=0)
        {

        l=v/a[i];
         cout<<a[i]<< " "<<l<<endl;
         v=v%a[i];
        }

       /* while(a[i]<=v&&v!=0)
        {
            v=v-a[i];

            s.push_back(a[i]);
            p++;
           // j++;
        }*/
    }
    /* for( i=0;i<p;i++)
    {
        cout<<s[i]<<" ";

    }
    cout<<endl<<p;*/
    return 0;
}
