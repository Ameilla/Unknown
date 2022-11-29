#include<iostream>
using namespace std;

int partition_(int *a,int low,int h)
{
    int pivot=a[h];
    int i=low-1;
    for(int j=low;j<=h-1;j++)
    {
        if(a[j]<pivot)
        {
            i++;
            int temp=a[i];
            a[i]=a[j];
            a[j]=temp;
        }
    }
    int temp=a[i+1];
    a[i+1]=a[h];
    a[h]=temp;
    return (i+1);
}
void quicksort(int *a,int l,int h)
{
    if(l<h)
    {
        int pivot=partition_(a,l,h);
        quicksort(a,l,pivot-1);
        quicksort(a,pivot+1,h);
    }
}
int main()
{
    int a[]={5,4,3,2,1};
    int h=sizeof(a)/sizeof(a[0]);
    quicksort(a,0,h-1);
    for(int i=0;i<h;i++)
    {
        printf("%d ",a[i]);
    }
}
