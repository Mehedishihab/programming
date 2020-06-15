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
void printArray(int a[], int size)
{
    int i;
    for (i=0; i < size; i++)
        printf("%d ", a[i]);

}
/*void swap(int* a,int* b)
{
    swap(*a,*b);
}*/
int main()
{
    int n;
    cin>>n;
    int a[n];
    for(int i=0; i<n; i++)
    {
        cin>>a[i];
    }
    quicksort(a,0,n-1);
    printArray(a, n);
    return 0;
}
