#include<iostream>
using namespace std;
mergearray(int *a,int l,int mid,int r)
{
    int b[r+1];
    int i=l,j=mid+1,k=l;
    while(i<=mid && j<=r)
    {
        if(a[i]<a[j])
        {
            b[k]=a[i];
            i++;
        }
        else
        {
            b[k]=a[j];
            j++;
        }
        k++;
    }
    if(i>mid)
    {
        while(j<=r)
        {
            b[k]=a[j];
            k++;j++;
        }
    }
    else
    {
        while(i<=mid)
        {
            b[k]=a[i];
            k++;i++;
        }
    }
    for(k=l;k<=r;k++)
    {
        a[k]=b[k];
    }
}

mergesort(int *a,int l,int r)
{
    if(l<r)
    {
        int mid=(l+r)/2;
        mergesort(a,l,mid);
        mergesort(a,mid+1,r);
        mergearray(a,l,mid,r);
    }
}
int main()
{
    int a[]={5,4,3,2,1,2,3};
    int r=sizeof(a)/sizeof(a[0]);
    int l=0;
    mergesort(a,l,r-1);
    for(int i=l;i<r;i++)
    {
        cout<<a[i]<<" ";
    }
}
