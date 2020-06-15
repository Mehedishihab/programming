#include<bits/stdc++.h>
using namespace std;
int knapsack(int W,int n,int vl[],int wi[])
{
    int knap[n+1][W+1];
    for(int i=0;i<=n;i++)
    {
        knap[i][0]=0;
    }
    for(int w=0;w<=W;w++)
    {
        knap[0][w]=0;
    }
    for(int i=1;i<=n;i++)
    {
        for(int w=1;w<=W;w++)
        {
            if(wi[i]<=w)
            {
                knap[i][w]=max(vl[i]+knap[i-1][w-wi[i]],knap[i-1][w]);
            }
            else
            {
                knap[i][w]=knap[i-1][w];
            }
        }
    }
    return knap[n][W];
}
int main()
{

   int W,n;
   cin>>W>>n;
   int vl[n+1],wi[n+1];
   for(int i=1;i<=n;i++)
   {
       cin>>vl[i]>>wi[i];
   }
  cout<< knapsack(W,n,vl,wi);
}
