#include<stdio.h>
int main()
{
    char a[10];
    scanf("%s",&a);
    printf("%d",strlen(a));
    int len=strlen(a);
    for(int i=0;i<len;i++)
    {
        for(int j=i+1;j<len;j++)
        {
            if(a[i]==a[j])
            {
                for(int k=j;k<len;k++)
                {
                    a[k]=a[k+1];
                }
                len--;
                j--;
            }
        }
    }
    for(int i=0;i<len;i++)
    {
        printf("%c",a[i]);
    }
}
