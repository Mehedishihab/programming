
#include<bits/stdc++.h>
using namespace std;
int A[100][100];
int main()
{
    int n,e,a,b,l,k=0;
    cin>>n>>e;

    for(int i=1; i<=e; i++)
    {
        cin>>a>>b>>l;
        A[a][b]=l;
        A[b][a]=l;

    }

    for(int i=1; i<e; i++)
    {
        for(int j=1; j<e; j++)
        {
            if(A[i][j]>1)
            {
                k=1;
            }
        }

    }

    if(k==1)
    {
        cout<<"weighted";
    }
    else
    {
        cout<<"unweighted";
    }
    return 0;
}
