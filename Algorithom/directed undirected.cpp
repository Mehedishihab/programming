#include<bits/stdc++.h>
using namespace std;
int A[100][100];
int main()
{
    int n,e,a,b,l,k=0;
    cin>>n>>e;

    for(int i=0; i<e; i++)
    {
        cin>>a>>b;
        A[a][b]=1;
        //A[b][a]=l;

    }

    for(int i=1; i<=e; i++)
    {
        for(int j=1; j<=e; j++)
        {
            if(A[i][j]==1)
            {
                if(A[j][i]==1)
                {
                    k=k+1;
                }
            }

        }

    }

    if(k>0)
    {
        cout<<"unDerected";
    }
    else
    {
        cout<<"derected";
    }
    return 0;
}

