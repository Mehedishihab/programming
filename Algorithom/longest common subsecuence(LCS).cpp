
#include<bits/stdc++.h>
using namespace std;
int main()
{
    string n,m;
    cin>>n>>m;
    int c=n.size();
    int d=m.size();
    int A[c+1][d+1],i,j;
    for( i=0;i<=c;i++)
    {
        for(j=0;j<=d;j++)
        {
            if(i==0||j==0)
            {
                A[i][j]=0;
            }
            else if( n[i-1]==m[j-1])
            {
                A[i][j]=A[i-1][j-1]+1;
            }
            else
            {
                A[i][j]=max(A[i][j-1],A[i-1][j]);
            }
        }
    }
    cout<<A[c][d];

    return 0;
}
