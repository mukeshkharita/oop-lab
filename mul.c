#include <stdio.h>
int main()
{
    int i,sum=0,j,k,n;
    scanf("%d",&n);
    int a[n][n],b[n][n],c[n][n];
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        scanf("%d",&a[i][j]);
    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        scanf("%d",&b[i][j]);
    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
        sum=0;
        for(k=0;k<n;k++)
        sum+=a[i][k]*b[k][j];
        c[i][j]=sum;
        }
    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        printf("%d ",c[i][j]);
        printf("\n");
    }
    }
    
    
