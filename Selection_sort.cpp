#include<iostream>
using namespace std;

void swapping(int *a,int *b)
{
    int temp=*a;
    *a=*b;
    *b=temp;
}
int* selectionsort(int *a,int n)
{
    int minindex=0;
    for(int i=0;i<n;i++)
    {
        minindex=i;
        for(int j=i+1;j<n;j++)
        {
            if(a[j]<a[minindex])
            {
                minindex=j;
            }
        }
        swapping(&a[i],&a[minindex]);
    }
    return a;
}
int main()
{
    int n;
    cin>>n;
    int* a;
    a=(int *)malloc(n*sizeof(int));
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    selectionsort(a,n);
    for(int i=0;i<n;i++)
    {
        cout<<a[i]<<" ";
    }
}
