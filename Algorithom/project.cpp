#include<bits/stdc++.h>
using namespace std;
int partition(int a[],int low,int high)
{
    int pivot=a[high];
    int i=low-1;
    for(int j=low; j<=high-1; j++)
    {
        if(a[j]<=pivot)
        {
            i++;
            swap(a[i],a[j]);
        }
    }
    swap(a[i+1],a[high]);
    return (i+1);
}
void quicksort(int a[],int low,int high)
{
    if(low<high)
    {
        int p=partition(a,low,high);

        quicksort(a,low, p- 1);
        quicksort(a, p + 1, high);
    }
}
void printArray(int a[], int n)
{
    int i;
    cout<<n<<"times of sorted data: ";
    for (i=1; i <=n; i++)
    {
        cout<<a[i]<<" ";
    }
    cout<<endl;

}

int main()
{
    int n;
    cout<<"Size of data: ";
    cin>>n;
    int a[n];
    cout<<n<<"times of data: ";
    for(int i=1; i<=n; i++)
    {
        cin>>a[i];
    }
    quicksort(a,1,n);
    printArray(a, n);


    if(n%2==0)
    {
        double v=n;
        int M=(v/2);
        int k=(v/2)+1;
        double md=((double)a[M]+(double)a[k])/2;
        cout<<"Madian: ";
        cout<<md;

    }
    if(n%2!=0)
    {
        double v=n;
        int M=(v+1)/2;
        cout<<"Madian: ";
        cout<<(double)a[M];

    }
    return 0;
}
