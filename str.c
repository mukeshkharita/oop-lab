#include <stdio.h>
#include <string.h>
int main()
{
    int t,i;
    scanf("%d",&t);
    for(i=0;i<t;i++)
    {
        int j;
        char a[100],b[100];
        scanf("%s%s",a,b);
        int l1,l2;
        l1 = strlen(a);
        l2 = strlen(b);
        char c[l1+l2];
        for(j=0;j<(l1+l2);j++)
        if(j<=l1)
        c[j] = a[j];
        else
        c[j] = b[j-l1];
        for(j=0;j<(l1+l2);j++)
        printf("%c",c[j]);
        printf("\n");
}
}
